
@protocol SBBacklightEnvironmentSessionProviderObserver <NSObject>

@required

- (void)backlightEnvironmentSessionsProvider:(SBBacklightEnvironmentSessionProvider *)arg1 didUpdatePresentation:(BLSHBacklightEnvironmentPresentation *)arg2 withBundleIdentifiers:(NSSet *)arg3;

@end
