
@protocol ProximityAppleIDSetupUI.PASUIGuardianPresentationViewController

@required

- (NSArray *)actions;
- (PRXAction *)addAction:(PRXAction *)arg1;
- (void)addChildViewController:(UIViewController *)arg1;
- (NSAttributedString *)attributedSubtitle;
- (PRXAction *)dismissButtonAction;
- (PRXAction *)dismissalConfirmationActionWithTitle:(NSString *)arg1 message:(NSString *)arg2 confirmButtonTitle:(NSString *)arg3 cancelButtonTitle:(NSString *)arg4;
- (unsigned long long)dismissalType;
- (<_TtP23ProximityAppleIDSetupUI29PASUIGuardianPresentationView_> *)mainView;
- (void)removeAction:(PRXAction *)arg1;
- (void)setActivityStatusWithText:(NSString *)arg1;
- (void)setAttributedSubtitle:(NSAttributedString *)arg1;
- (void)setDismissButtonAction:(PRXAction *)arg1;
- (void)setDismissalType:(unsigned long long)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;
- (UIViewController *)viewController;

@end
