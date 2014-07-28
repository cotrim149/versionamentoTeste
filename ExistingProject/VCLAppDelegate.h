//
//  VCLAppDelegate.h
//  ExistingProject
//
//  Created by Victor de Lima on 28/07/14.
//  Copyright (c) 2014 Victor de Lima. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VCLAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
