
@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *bundleIdentifier;

- (id)bundleIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setBundleIdentifier:(id)arg1;

@end
