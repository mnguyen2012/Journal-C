//
//  EntryTableViewCell.m
//  Journal-C
//
//  Created by Michael Nguyen on 11/30/20.
//

#import "EntryTableViewCell.h"
#import "EntryController.h"

@implementation EntryTableViewCell

- (void) updateWithEntry:(Entry *)entry
{
    if (entry) {
        _entryTitle.text = [entry title];
    }
}
@end
