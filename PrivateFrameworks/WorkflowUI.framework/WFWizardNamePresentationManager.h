
@interface WFWizardNamePresentationManager : NSObject {
    UINavigationController * _navigationController;
    bool  _presentsModally;
    WFWorkflowWizardNameViewController * _wizardNameViewController;
}

@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) bool presentsModally;
@property (nonatomic, readonly) WFWorkflowWizardNameViewController *wizardNameViewController;

- (void).cxx_destruct;
- (void)dismiss;
- (id)initWithNavigationController:(id)arg1 wizardNameViewController:(id)arg2;
- (id)navigationController;
- (void)present;
- (void)presentModal;
- (bool)presentsModally;
- (id)wizardNameViewController;

@end
