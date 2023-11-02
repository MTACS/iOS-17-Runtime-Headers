
@interface CSReceiverPreferences : CoreSpotlightPreferences

@property (nonatomic, readonly, copy) NSDictionary *dictionary;

- (id)dictionary;
- (void)disableBundleIdentifier:(id)arg1;
- (void)enableBundleIdentifier:(id)arg1;
- (id)init;

@end
