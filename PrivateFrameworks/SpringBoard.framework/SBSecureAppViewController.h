
@interface SBSecureAppViewController : SBDashBoardHostedAppViewController

@property (nonatomic) <SBSecureAppViewControllerDelegate> *delegate;

- (void)_updateDisplayLayoutElementForActivation:(id)arg1;
- (bool)handleEvent:(id)arg1;

@end
