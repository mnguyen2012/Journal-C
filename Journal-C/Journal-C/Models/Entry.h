//
//  Entry.h
//  Journal-C
//
//  Created by Michael Nguyen on 11/30/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Entry : NSObject

@property (nonatomic, copy) NSString * title;
@property (nonatomic, copy) NSString * bodyText;
@property (nonatomic, copy) NSDate * timestamp;

- (instancetype) initWithTitle:(NSString *)title
                      bodyText:(NSString *)bodyText
                     timestamp:(NSDate *)timestamp;

@end

NS_ASSUME_NONNULL_END
