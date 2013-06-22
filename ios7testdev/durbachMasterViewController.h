//
//  durbachMasterViewController.h
//  ios7testdev
//
//  Created by Marc Durbach on 22/06/13.
//  Copyright (c) 2013 Marc Durbach. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface durbachMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
