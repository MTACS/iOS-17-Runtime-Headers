
@interface VTUIProximityEnrollTrainingView : VTUIProximityView {
    VTUICheckMarkView * _checkMark;
    UIView * _containerView;
    UIButton * _dismissButton;
    long long  _enrollmentStyle;
    VTUIPagedLabel * _instructionPagedLabel;
    UILabel * _instructionPreludeLabel;
    UIStackView * _instructionStackView;
    SUICOrbView * _orbView;
    UILabel * _pageLabel;
    UIButton * _skipButton;
    UILabel * _statusLabel;
    NSArray * _viewConstraints;
    VTPreferences * _vtPrefs;
    VTUIStyle * _vtStyle;
}

@property (nonatomic, retain) VTUICheckMarkView *checkMark;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIButton *dismissButton;
@property (nonatomic) long long enrollmentStyle;
@property (nonatomic, retain) VTUIPagedLabel *instructionPagedLabel;
@property (nonatomic, retain) UILabel *instructionPreludeLabel;
@property (nonatomic, retain) UIStackView *instructionStackView;
@property (nonatomic, retain) SUICOrbView *orbView;
@property (nonatomic, retain) UILabel *pageLabel;
@property (nonatomic, retain) UIButton *skipButton;
@property (nonatomic, retain) UILabel *statusLabel;
@property (nonatomic, retain) NSArray *viewConstraints;

- (void).cxx_destruct;
- (void)_setupConstraintsToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupContent;
- (id)checkMark;
- (id)containerView;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)dismissButton;
- (long long)enrollmentStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEnrollmentStyle:(long long)arg2;
- (id)instructionPagedLabel;
- (id)instructionPreludeLabel;
- (id)instructionStackView;
- (id)orbView;
- (id)pageLabel;
- (void)setCheckMark:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setEnrollmentStyle:(long long)arg1;
- (void)setInstructionPagedLabel:(id)arg1;
- (void)setInstructionPreludeLabel:(id)arg1;
- (void)setInstructionStackView:(id)arg1;
- (void)setOrbView:(id)arg1;
- (void)setPageLabel:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setViewConstraints:(id)arg1;
- (id)skipButton;
- (id)statusLabel;
- (id)viewConstraints;

@end
