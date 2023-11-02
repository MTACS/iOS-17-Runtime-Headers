
@interface CSAssetManagerEnablePolicy : CSPolicy

- (void)_addAssetManagerEnabledConditions;
- (bool)_shouldCheckNetworkAvailability;
- (void)_subscribeEventMonitors;
- (id)init;

@end
