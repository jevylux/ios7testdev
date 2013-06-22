//
//  durbachDetailViewController.h
//  ios7testdev
//
//  Created by Marc Durbach on 22/06/13.
//  Copyright (c) 2013 Marc Durbach. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface durbachDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
