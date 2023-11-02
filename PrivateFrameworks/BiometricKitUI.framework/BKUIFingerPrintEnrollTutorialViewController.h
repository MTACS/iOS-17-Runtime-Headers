
@interface BKUIFingerPrintEnrollTutorialViewController : OBWelcomeController {
    OBAnimationController * _animationController;
    NSTimer * _animationTimer;
    BKUIAnimationView * _animationView;
    NSLayoutConstraint * _contentViewTopConstraint;
    OBTrayButton * _continueButton;
    <BKUIEmbeddedEnrollmentSelectionType> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _displayRect;
    UIImageView * _enrollTutorialImageView;
    unsigned long long  _enrollViewState;
    bool  _inBuddy;
    long long  _initialInterfaceOrientation;
    bool  _isSecondEnrollment;
    BKUIFingerPrintPosedVideoPlayerView * _posedVideoPlayerView;
    bool  _showFollowUpEnrollmentUpSellContent;
    OBTrayButton * _skipButton;
    <UITraitChangeRegistration> * _traitChangeRegistration;
    NSObject<OS_os_log> * bkui_animation_view_log;
}

@property (nonatomic, retain) OBAnimationController *animationController;
@property (nonatomic, retain) NSTimer *animationTimer;
@property (nonatomic, retain) BKUIAnimationView *animationView;
@property (nonatomic, retain) NSLayoutConstraint *contentViewTopConstraint;
@property (nonatomic, retain) OBTrayButton *continueButton;
@property (nonatomic) <BKUIEmbeddedEnrollmentSelectionType> *delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } displayRect;
@property (nonatomic, retain) UIImageView *enrollTutorialImageView;
@property (nonatomic) unsigned long long enrollViewState;
@property (nonatomic) bool inBuddy;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) bool isSecondEnrollment;
@property (nonatomic, retain) BKUIFingerPrintPosedVideoPlayerView *posedVideoPlayerView;
@property (nonatomic) bool showFollowUpEnrollmentUpSellContent;
@property (nonatomic, retain) OBTrayButton *skipButton;
@property (nonatomic, retain) <UITraitChangeRegistration> *traitChangeRegistration;

- (void).cxx_destruct;
- (double)_contentViewHeight;
- (double)_contentViewTopOffset;
- (void)_continuePressed:(id)arg1;
- (id)_detailTextPhase1;
- (id)_devicePrefix;
- (void)_enrollSkipped:(id)arg1;
- (id)_headerTitlePhase1;
- (id)_headerTitlePhase2;
- (void)_performInitialAnimationSetup;
- (void)_restartAnimation;
- (void)_setupTouchIDAnimation;
- (bool)_topTouchButtonIpad;
- (id)_videoAssetName;
- (id)animationController;
- (id)animationTimer;
- (id)animationView;
- (id)combinedTutorialText;
- (id)contentViewTopConstraint;
- (id)continueButton;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayRect;
- (id)enrollTutorialImageView;
- (unsigned long long)enrollViewState;
- (bool)inBuddy;
- (id)initInBuddy:(bool)arg1 displayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)initialInterfaceOrientation;
- (bool)isSecondEnrollment;
- (void)loadAVPlayer;
- (id)posedVideoPlayerView;
- (void)setAnimationController:(id)arg1;
- (void)setAnimationTimer:(id)arg1;
- (void)setAnimationView:(id)arg1;
- (void)setContentViewTopConstraint:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnrollTutorialImageView:(id)arg1;
- (void)setEnrollViewState:(unsigned long long)arg1;
- (void)setInBuddy:(bool)arg1;
- (void)setInitialInterfaceOrientation:(long long)arg1;
- (void)setIsSecondEnrollment:(bool)arg1;
- (void)setPosedVideoPlayerView:(id)arg1;
- (void)setShowFollowUpEnrollmentUpSellContent:(bool)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setTraitChangeRegistration:(id)arg1;
- (bool)showFollowUpEnrollmentUpSellContent;
- (id)skipButton;
- (id)traitChangeRegistration;
- (id)tutorialImage;
- (id)tutorialText;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
