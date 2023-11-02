
@protocol TFBetaAppLaunchPresenterView

@required

- (void)dismissAnimated:(bool)arg1;
- (void)showHowToWithTitle:(NSString *)arg1 subtitle:(NSString *)arg2 screenshotImageDict:(NSDictionary *)arg3 primaryButtonTitle:(NSString *)arg4 primaryButtonEvent:(unsigned long long)arg5 secondaryButtonTitle:(NSString *)arg6 secondaryButtonEvent:(unsigned long long)arg7 animated:(bool)arg8;
- (void)showLoadingAnimated:(bool)arg1;
- (void)showTestNotesWithTitle:(NSString *)arg1 lockup:(TFAppLockup *)arg2 testNotesTitle:(NSString *)arg3 testNotesText:(NSString *)arg4 primaryButtonTitle:(NSString *)arg5 primaryButtonEvent:(unsigned long long)arg6 animated:(bool)arg7 fetchingOnImageFetcher:(TFImageFetcher *)arg8;

@end
