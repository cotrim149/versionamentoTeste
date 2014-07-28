//
//  VCLDetailViewController.h
//  ExistingProject
//
//  Created by Victor de Lima on 28/07/14.
//  Copyright (c) 2014 Victor de Lima. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VCLDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
