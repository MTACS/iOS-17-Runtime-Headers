
@protocol PMMDataProtectionMonitorDelegate <NSObject>

@optional

- (void)dataProtectionMonitor:(PMMDataProtectionMonitor *)arg1 dataProtectionStatusDidChange:(long long)arg2;
- (void)dataProtectionMonitor:(PMMDataProtectionMonitor *)arg1 encryptedDataAvailbilityDidChange:(long long)arg2;
- (void)dataProtectionMonitor:(PMMDataProtectionMonitor *)arg1 unlockedSinceBoot:(bool)arg2;

@end
