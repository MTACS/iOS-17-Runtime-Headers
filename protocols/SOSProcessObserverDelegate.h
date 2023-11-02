
@protocol SOSProcessObserverDelegate <NSObject>

@required

- (void)processObserver:(SOSProcessObserver *)arg1 bundleIdentifier:(NSString *)arg2 didUpdateApplicationRunning:(bool)arg3;

@end
