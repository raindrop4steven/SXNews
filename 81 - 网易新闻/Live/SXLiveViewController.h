//
//  SXLiveViewController.h
//  81 - 网易新闻
//
//  Created by steven on 27/10/2016.
//  Copyright © 2016 ShangxianDante. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SXLiveViewController : UIViewController<UICollectionViewDelegate, UICollectionViewDataSource>

@property (strong, nonatomic) IBOutlet UICollectionView *liveCollectionView;
@end
