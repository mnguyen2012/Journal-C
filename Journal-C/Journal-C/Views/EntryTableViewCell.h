//
//  EntryTableViewCell.h
//  Journal-C
//
//  Created by Michael Nguyen on 11/30/20.
//

#import <UIKit/UIKit.h>
#import "Entry.h"

NS_ASSUME_NONNULL_BEGIN

@interface EntryTableViewCell : UITableViewCell

@property (nonatomic, strong, nonnull) Entry * entry;

@property (weak, nonatomic) IBOutlet UILabel *entryTitle;

@end

NS_ASSUME_NONNULL_END
