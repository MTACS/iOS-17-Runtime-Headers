
@protocol SBHProxiedApplicationPlaceholderDelegate <NSObject>

@required

- (bool)placeholderRepresentsNewAppInstallFromStore:(SBHProxiedApplicationPlaceholder *)arg1;
- (bool)placeholderShouldAllowPausing:(SBHProxiedApplicationPlaceholder *)arg1;
- (void)placeholderWantsUninstall:(SBHProxiedApplicationPlaceholder *)arg1;

@end
