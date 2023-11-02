
@protocol IDSFoundationSystemMonitor <NSObject>

@required

- (void)addListener:(id <IMSystemMonitorListener>)arg1;
- (bool)isSetup;
- (bool)isUnderFirstDataProtectionLock;
- (void)removeListener:(id <IMSystemMonitorListener>)arg1;

@end
