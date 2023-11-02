
@protocol DBSystemAlertPresenting <NSObject>

@required

- (void)alertServer:(DBUserAlertServer *)arg1 wantsSystemDismissalForAlert:(DBUserAlert *)arg2;
- (void)alertServer:(DBUserAlertServer *)arg1 wantsSystemPresentationForAlert:(DBUserAlert *)arg2;

@end
