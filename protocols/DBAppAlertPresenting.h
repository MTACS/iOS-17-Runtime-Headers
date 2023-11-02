
@protocol DBAppAlertPresenting <NSObject>

@required

- (void)alertServer:(DBUserAlertServer *)arg1 wantsAppDismissalForAlert:(DBUserAlert *)arg2 bundleID:(NSString *)arg3;
- (void)alertServer:(DBUserAlertServer *)arg1 wantsAppPresentationForAlert:(DBUserAlert *)arg2 bundleID:(NSString *)arg3;

@end
