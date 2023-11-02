
@interface DelayedSpinner : NSObject

+ (void)_setShowStatusBarSpinner:(bool)arg1 withDelay:(double)arg2;
+ (void)_setShowStatusBarSpinnerTimer:(id)arg1;
+ (void)_showStatusBarSpinner:(id)arg1;
+ (void)hide;
+ (void)showWithDelay;

@end
