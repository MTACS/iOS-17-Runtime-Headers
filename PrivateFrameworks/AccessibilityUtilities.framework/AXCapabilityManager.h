
@interface AXCapabilityManager : NSObject

+ (id)sharedManager;

- (id)capabilities;
- (bool)isAccessibilityCapability:(id)arg1;
- (bool)isCapabilityAvailable:(id)arg1;

@end
