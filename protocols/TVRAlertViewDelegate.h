
@protocol TVRAlertViewDelegate <NSObject>

@required

- (void)alertView:(TVRAlertView *)arg1 didUpdateText:(NSString *)arg2;
- (void)alertViewDidCancel:(TVRAlertView *)arg1;

@end
