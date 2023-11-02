
@interface PUReviewScreenControlBar : UIView {
    NSArray * __buttonsForLayout;
    UIView * _accessoryView;
    NSSet * _availableButtons;
    UIButton * _editButton;
    NSSet * _enabledButtons;
    UIButton * _funEffectsButton;
    struct CGPoint { 
        double x; 
        double y; 
    }  _layoutCenterAlignmentPoint;
    UIButton * _markupButton;
    UIButton * _sendButton;
    bool  _shouldLayoutVertically;
    bool  _useTransparentBackground;
    bool  _useTransparentTouches;
}

@property (setter=_setButtonsForLayout:, nonatomic, retain) NSArray *_buttonsForLayout;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, copy) NSSet *availableButtons;
@property (nonatomic, readonly) UIButton *editButton;
@property (nonatomic, copy) NSSet *enabledButtons;
@property (nonatomic, readonly) UIButton *funEffectsButton;
@property (nonatomic) struct CGPoint { double x1; double x2; } layoutCenterAlignmentPoint;
@property (nonatomic, readonly) UIButton *markupButton;
@property (nonatomic, readonly) UIButton *sendButton;
@property (nonatomic) bool shouldLayoutVertically;
@property (nonatomic) bool useTransparentBackground;
@property (nonatomic) bool useTransparentTouches;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sendButtonAlignmentRectInHorizontalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeCenterAlignmentPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sendButtonAlignmentRectInVerticalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeCenterAlignmentPoint:(struct CGPoint { double x1; double x2; })arg2 controlsCount:(unsigned long long)arg3;
+ (id)supportedButtons;

- (void).cxx_destruct;
- (id)_buttonForButtonType:(long long)arg1;
- (id)_buttonsForLayout;
- (bool)_isButtonAvailable:(long long)arg1;
- (bool)_isButtonEnabled:(long long)arg1;
- (void)_setButtonsForLayout:(id)arg1;
- (void)_updateBackgroundTransparency;
- (void)_updateButtonText;
- (void)_updateButtonVisibility;
- (id)accessoryView;
- (id)availableButtons;
- (void)didMoveToWindow;
- (id)editButton;
- (id)enabledButtons;
- (id)funEffectsButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })layoutCenterAlignmentPoint;
- (void)layoutSubviews;
- (id)markupButton;
- (id)sendButton;
- (void)setAccessoryView:(id)arg1;
- (void)setAvailableButtons:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnabledButtons:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutCenterAlignmentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldLayoutVertically:(bool)arg1;
- (void)setUseTransparentBackground:(bool)arg1;
- (void)setUseTransparentTouches:(bool)arg1;
- (bool)shouldLayoutVertically;
- (bool)useTransparentBackground;
- (bool)useTransparentTouches;

@end
