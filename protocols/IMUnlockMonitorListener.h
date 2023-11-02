
@protocol IMUnlockMonitorListener <NSObject>

@optional

- (void)systemDidLeaveFirstDataProtectionLock;
- (void)systemDidUnlock;

@end
