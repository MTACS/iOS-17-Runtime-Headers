
@protocol CNFRegFirstRunExperience <NSObject>

@required

- (long long)currentAppearanceStyle;
- (UIBarButtonItem *)customLeftButton;
- (UIBarButtonItem *)customRightButton;
- (<CNFRegFirstRunDelegate> *)delegate;
- (id)initWithRegController:(CNFRegController *)arg1 account:(IMAccount *)arg2;
- (void)setCustomLeftButton:(UIBarButtonItem *)arg1;
- (void)setCustomRightButton:(UIBarButtonItem *)arg1;
- (void)setDelegate:(id <CNFRegFirstRunDelegate>)arg1;

@end
