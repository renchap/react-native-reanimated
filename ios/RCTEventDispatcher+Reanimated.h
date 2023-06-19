#import <Foundation/Foundation.h>
#import <React/RCTEventDispatcher.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCTEventDispatcher (Reanimated)

- (void)reanimated_sendEvent:(id<RCTEvent>)event;

@end

NS_ASSUME_NONNULL_END
