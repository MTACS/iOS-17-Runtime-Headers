
@protocol DDDetectionControllerInteractionDelegate <NSObject>

@optional

- (void)action:(DDAction *)arg1 didDismissAlertController:(UIAlertController *)arg2;
- (void)actionDidFinish:(DDAction *)arg1;
- (void)actionDidFinish:(DDAction *)arg1 shouldDismiss:(bool)arg2;
- (void)actionWillStart:(DDAction *)arg1;

@end
