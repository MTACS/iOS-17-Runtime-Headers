
@protocol _UIAlertActionMutablePropertyObservering <NSObject>

@required

- (void)_action:(UIAlertAction *)arg1 changedToBePreferred:(bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToChecked:(bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToEnabled:(bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitle:(NSString *)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(UIAlertAction *)arg1 updatedImageTintColor:(UIColor *)arg2;
- (void)_action:(UIAlertAction *)arg1 updatedTitleTextColor:(UIColor *)arg2;

@end
