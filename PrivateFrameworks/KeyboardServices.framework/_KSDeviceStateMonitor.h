
@interface _KSDeviceStateMonitor : NSObject {
    bool  _isContentProtectionAvailable;
}

@property (nonatomic) bool isContentProtectionAvailable;

+ (id)deviceStateMonitor;
+ (bool)isRunningOnInternalBuild;

- (void)dealloc;
- (bool)deviceHasBeenUnlockedSinceBoot;
- (bool)deviceIsPasswordConfigured;
- (void)handleKeyBagLockNotification;
- (id)init;
- (bool)isContentProtectionAvailable;
- (bool)isDataAvailableForClassC;
- (void)setIsContentProtectionAvailable:(bool)arg1;

@end
