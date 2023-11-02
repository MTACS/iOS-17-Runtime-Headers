
@protocol MCMVolumeChangeMonitorObserver <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)volumeChangedDispatchQueue;
- (void)volumeChangedWithEvents:(unsigned long long)arg1 newVolumeState:(unsigned long long)arg2;

@end
