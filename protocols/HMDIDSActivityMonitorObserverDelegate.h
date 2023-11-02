
@protocol HMDIDSActivityMonitorObserverDelegate <NSObject>

@required

- (void)observer:(HMDIDSActivityMonitorObserver *)arg1 didUpdateDevice:(HMDDevice *)arg2 isOnline:(bool)arg3;

@end
