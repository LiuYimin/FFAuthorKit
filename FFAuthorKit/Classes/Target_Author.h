//
//  Target_Author.h
//  FFAuthorKit
//
//  Created by Liu on 2019/1/30.
//

#import <Foundation/Foundation.h>
#import "FFAuthorKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface Target_Author : NSObject
- (UIViewController*)Action_authorDetailViewController:(NSDictionary*)params;
- (NSDictionary*)Action_authorReformerWithOriginData:(NSDictionary*)params;
- (NSDictionary *)Action_authorReformer:(NSDictionary*)params;
- (APIRequest*)Action_authorAPIRequest:(NSDictionary*)params;
@end

NS_ASSUME_NONNULL_END
