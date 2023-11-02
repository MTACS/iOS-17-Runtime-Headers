
@protocol CSProximitySensorProviderObserver <NSObject>

@optional

- (void)proximitySensorProvider:(id <CSProximitySensorProviding>)arg1 objectWithinProximityDidChange:(bool)arg2;

@end
