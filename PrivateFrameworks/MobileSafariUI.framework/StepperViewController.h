
@interface StepperViewController : UIViewController <UIViewControllerTransitioningDelegate, _SFSettingsAlertStepperConfiguration> {
    <_SFSettingsAlertStepperController> * _stepperController;
    SFStepperView * _stepperView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_SFSettingsAlertStepperController> *stepperController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buttonForStepperButton:(long long)arg1;
- (id)initWithStepperController:(id)arg1;
- (void)loadView;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setEnabled:(bool)arg1 forButton:(long long)arg2;
- (void)setImage:(id)arg1 forButton:(long long)arg2;
- (void)setStepperController:(id)arg1;
- (void)setText:(id)arg1 forButton:(long long)arg2;
- (id)stepperController;
- (void)viewDidLoad;

@end
