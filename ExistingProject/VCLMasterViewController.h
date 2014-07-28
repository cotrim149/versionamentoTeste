//
//  VCLMasterViewController.h
//  ExistingProject
//
//  Created by Victor de Lima on 28/07/14.
//  Copyright (c) 2014 Victor de Lima. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface VCLMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
