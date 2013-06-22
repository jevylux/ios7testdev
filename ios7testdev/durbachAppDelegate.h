//
//  durbachAppDelegate.h
//  ios7testdev
//
//  Created by Marc Durbach on 22/06/13.
//  Copyright (c) 2013 Marc Durbach. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface durbachAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
