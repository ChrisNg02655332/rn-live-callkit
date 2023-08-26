
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnLiveCallkitSpec.h"

@interface RnLiveCallkit : NSObject <NativeRnLiveCallkitSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnLiveCallkit : NSObject <RCTBridgeModule>
#endif

@end
