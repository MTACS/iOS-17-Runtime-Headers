
@protocol BLSHBacklightPlatformProviderObserver <NSObject>

@required

- (void)platformProvider:(id <BLSHBacklightPlatformProvider>)arg1 didChangeAlwaysOnSetting:(bool)arg2;
- (void)platformProviderDidDetectSignificantUserInteraction:(id <BLSHBacklightPlatformProvider>)arg1;

@end
