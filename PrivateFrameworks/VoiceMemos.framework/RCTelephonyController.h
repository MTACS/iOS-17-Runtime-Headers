
@interface RCTelephonyController : NSObject

@property (nonatomic, readonly) bool isCallPresent;

+ (id)sharedTelephonyController;

- (bool)isCallPresent;

@end
