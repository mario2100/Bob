//
//  Configuration.h
//  ifanyi
//
//  Created by ripper on 2019/11/14.
//  Copyright © 2019 ripperhe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TranslateLanguage.h"

NS_ASSUME_NONNULL_BEGIN

@interface Configuration : NSObject

@property (nonatomic, assign) Language from;
@property (nonatomic, assign) Language to;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
