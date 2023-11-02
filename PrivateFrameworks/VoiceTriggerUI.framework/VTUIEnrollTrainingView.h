
@interface VTUIEnrollTrainingView : UIView {
    VTUICheckMarkView * _checkMark;
    bool  _checkMarkViewHidden;
    <VTUIEnrollTrainingViewDelegate> * _delegate;
    UILabel * _instructionContinuationLabel;
    VTUIPagedLabel * _instructionPagedLabel;
    UILabel * _instructionPreludeLabel;
    SUICOrbView * _orbView;
    SiriUIContentButton * _radarButton;
    bool  _radarButtonHidden;
    UIButton * _radarExitButton;
    UIButton * _skipButton;
    bool  _skipButtonHidden;
    UILabel * _statusLabel;
}

@property (nonatomic, retain) VTUICheckMarkView *checkMark;
@property (nonatomic) bool checkMarkViewHidden;
@property (nonatomic) <VTUIEnrollTrainingViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *instructionContinuationLabel;
@property (nonatomic, retain) VTUIPagedLabel *instructionPagedLabel;
@property (nonatomic, readonly) UILabel *instructionPreludeLabel;
@property (nonatomic, readonly) SUICOrbView *orbView;
@property (nonatomic, retain) SiriUIContentButton *radarButton;
@property (nonatomic) bool radarButtonHidden;
@property (nonatomic, readonly) UIButton *radarExitButton;
@property (nonatomic, retain) UIButton *skipButton;
@property (nonatomic) bool skipButtonHidden;
@property (nonatomic, readonly) UILabel *statusLabel;

- (void).cxx_destruct;
- (void)_setupUI;
- (id)checkMark;
- (bool)checkMarkViewHidden;
- (void)clearInstructionLabel;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instructionContinuationLabel;
- (id)instructionPagedLabel;
- (id)instructionPreludeLabel;
- (id)orbView;
- (id)radarButton;
- (bool)radarButtonHidden;
- (id)radarExitButton;
- (void)setCheckMark:(id)arg1;
- (void)setCheckMarkViewHidden:(bool)arg1;
- (void)setContinuationAndPreludeLabelHidden:(bool)arg1;
- (void)setContinuationLabelHidden:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setInstructionPagedLabel:(id)arg1;
- (void)setPreludeLabelHidden:(bool)arg1;
- (void)setRadarButton:(id)arg1;
- (void)setRadarButtonHidden:(bool)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setSkipButtonHidden:(bool)arg1;
- (void)showRadarExitButton:(id)arg1;
- (id)skipButton;
- (bool)skipButtonHidden;
- (void)slideInText:(id)arg1 afterDelay:(double)arg2 completion:(id /* block */)arg3;
- (void)startCheckMarkAnimation:(bool)arg1 completion:(id /* block */)arg2;
- (id)statusLabel;

@end
