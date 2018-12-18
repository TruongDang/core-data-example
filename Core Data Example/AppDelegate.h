//
//  AppDelegate.h
//  Core Data Example
//
//  Created by Đặng Văn Trường on 12/18/18.
//  Copyright © 2018 Đặng Văn Trường. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (readonly, strong) NSPersistentContainer *persistentContainer API_AVAILABLE(ios(10.0));

- (NSURL *)applicationDocumentsDirectory;
- (void)saveContext;


@end

