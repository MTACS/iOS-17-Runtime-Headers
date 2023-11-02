
@protocol CSProximitySensorProviding <NSObject>

@required

- (void)addProximitySensorProviderObserver:(id <CSProximitySensorProviderObserver>)arg1;
- (bool)isObjectInProximity;
- (void)removeProximitySensorProviderObserver:(id <CSProximitySensorProviderObserver>)arg1;

@end
