
@interface MIContainerProtectionManager : NSObject

+ (id)defaultManager;

- (void)setDataProtectionOnDataContainer:(id)arg1 forNewBundle:(id)arg2 retryIfLocked:(bool)arg3;

@end
