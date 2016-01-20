﻿#import <Foundation/Foundation.h>
#import "GHParser.h"

@class GHFeature;

@interface GHParser (Extensions)

- (GHFeature *)parse:(NSString *)theSourceFile;
- (GHFeature *)parseContent:(NSString *)content;
@end