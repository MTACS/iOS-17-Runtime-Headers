
@interface BKUIFaceIDSplashViewController : OBWelcomeController {
    OBAnimationController * _animationController;
    OBTrayButton * _continueButton;
    BKDevice * _device;
    id /* block */  _endEnrollActionPrimary;
    id /* block */  _endEnrollActionSecondary;
    bool  _inBuddy;
    OBTrayButton * _skipButton;
}

@property (nonatomic, retain) OBAnimationController *animationController;
@property (nonatomic, retain) OBTrayButton *continueButton;
@property (nonatomic, retain) BKDevice *device;
@property (nonatomic, copy) id /* block */ endEnrollActionPrimary;
@property (nonatomic, copy) id /* block */ endEnrollActionSecondary;
@property (nonatomic) bool inBuddy;
@property (nonatomic, retain) OBTrayButton *skipButton;

- (void).cxx_destruct;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (id)animationController;
- (id)continueButton;
- (id)device;
- (id /* block */)endEnrollActionPrimary;
- (id /* block */)endEnrollActionSecondary;
- (bool)inBuddy;
- (id)initInBuddy:(bool)arg1 bkDevice:(id)arg2 withEndEnrollmentActionPrimary:(id /* block */)arg3 enrollmentActionSecondary:(id /* block */)arg4;
- (id)initInBuddy:(bool)arg1 isDemo:(bool)arg2 bkDevice:(id)arg3 withEndEnrollmentActionPrimary:(id /* block */)arg4 enrollmentActionSecondary:(id /* block */)arg5;
- (void)setAnimationController:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setEndEnrollActionPrimary:(id /* block */)arg1;
- (void)setEndEnrollActionSecondary:(id /* block */)arg1;
- (void)setInBuddy:(bool)arg1;
- (void)setSkipButton:(id)arg1;
- (id)skipButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
