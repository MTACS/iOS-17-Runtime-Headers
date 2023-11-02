
@interface BKUIAlertView : UIView {
    UIAlertController * _alertController;
    double  _alertHudMinDisplayTime;
    UILabel * _alertHudText;
    double  _alertHudTextStartTime;
    double  _alertHudTimeout;
    UIView * _alertHudView;
    SEL  _cancelButtonSelector;
    SEL  _otherButtonSelector;
    id  _parent;
    NSObject<OS_os_log> * bkui_alert_view_log;
}

@property (nonatomic) double alertHudMinDisplayTime;
@property (nonatomic) UILabel *alertHudText;
@property (nonatomic) double alertHudTimeout;
@property (nonatomic) UIView *alertHudView;
@property (nonatomic) SEL cancelButtonSelector;
@property (nonatomic) SEL otherButtonSelector;
@property (nonatomic) id parent;

- (void).cxx_destruct;
- (void)_hideAlertHudView;
- (void)_init;
- (void)_setFadeAnimation:(id)arg1;
- (double)alertHudMinDisplayTime;
- (id)alertHudText;
- (double)alertHudTimeout;
- (id)alertHudView;
- (SEL)cancelButtonSelector;
- (void)hideAnimated:(bool)arg1;
- (id)init;
- (bool)isAlertHidden;
- (SEL)otherButtonSelector;
- (id)parent;
- (void)setAlertHudMinDisplayTime:(double)arg1;
- (void)setAlertHudText:(id)arg1;
- (void)setAlertHudTimeout:(double)arg1;
- (void)setAlertHudView:(id)arg1;
- (void)setCancelButtonSelector:(SEL)arg1;
- (void)setOtherButtonSelector:(SEL)arg1;
- (void)setParent:(id)arg1;
- (void)show:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 viewController:(id)arg4;
- (void)show:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 cancelButtonSelector:(SEL)arg5 otherButtonTitle:(id)arg6 otherButtonSelector:(SEL)arg7 viewController:(id)arg8;
- (void)show:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 cancelButtonSelector:(SEL)arg5 viewController:(id)arg6;
- (void)showAlert:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 viewController:(id)arg5;

@end
