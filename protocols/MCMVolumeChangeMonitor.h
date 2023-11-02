
@protocol MCMVolumeChangeMonitor <NSObject>

@required

- (void)addObserver:(id <MCMVolumeChangeMonitorObserver>)arg1;
- (NSURL *)mountPointURL;
- (void)removeObserver:(id <MCMVolumeChangeMonitorObserver>)arg1;
- (void)start;

@end
