
@interface PUReviewScreenTopBar : UIView {
    NSSet * _availableButtons;
    unsigned long long  _backgroundStyle;
    PUReviewScreenDoneButton * _doneButton;
    struct CGPoint { 
        double x; 
        double y; 
    }  _doneButtonCenterAlignmentPoint;
    NSSet * _enabledButtons;
    UIButton * _retakeButton;
}

@property (nonatomic, copy) NSSet *availableButtons;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, readonly) PUReviewScreenDoneButton *doneButton;
@property (nonatomic) struct CGPoint { double x1; double x2; } doneButtonCenterAlignmentPoint;
@property (nonatomic, copy) NSSet *enabledButtons;
@property (nonatomic, readonly) UIButton *retakeButton;

+ (id)supportedButtons;

- (void).cxx_destruct;
- (id)_buttonForButtonType:(long long)arg1;
- (bool)_isButtonAvailable:(long long)arg1;
- (bool)_isButtonEnabled:(long long)arg1;
- (void)_updateBackgroundColor;
- (void)_updateButtonVisibility;
- (id)availableButtons;
- (unsigned long long)backgroundStyle;
- (void)didMoveToWindow;
- (id)doneButton;
- (struct CGPoint { double x1; double x2; })doneButtonCenterAlignmentPoint;
- (id)enabledButtons;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)retakeButton;
- (void)setAvailableButtons:(id)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setDoneButtonCenterAlignmentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnabledButtons:(id)arg1;

@end
