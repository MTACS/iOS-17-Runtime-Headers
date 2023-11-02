
@interface PKPaletteButtonGroupView : UIView <PKPaletteViewSizeScaling> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _additionalContentMargins;
    UIStackView * _buttonStackView;
    NSLayoutConstraint * _buttonStackViewBottomConstraint;
    NSLayoutConstraint * _buttonStackViewLeadingConstraint;
    NSLayoutConstraint * _buttonStackViewTopConstraint;
    NSLayoutConstraint * _buttonStackViewTrailingConstraint;
    NSArray * _buttons;
    double  _scalingFactor;
    bool  _useEqualInterItemSpacing;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } additionalContentMargins;
@property (nonatomic) long long axis;
@property (nonatomic, retain) UIStackView *buttonStackView;
@property (nonatomic, retain) NSLayoutConstraint *buttonStackViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *buttonStackViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *buttonStackViewTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *buttonStackViewTrailingConstraint;
@property (nonatomic, copy) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scalingFactor;
@property (readonly) Class superclass;
@property (nonatomic) bool useEqualInterItemSpacing;

- (void).cxx_destruct;
- (void)_updateUI;
- (void)addButton:(id)arg1;
- (void)addButtonsFromArray:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })additionalContentMargins;
- (long long)axis;
- (id)buttonStackView;
- (id)buttonStackViewBottomConstraint;
- (id)buttonStackViewLeadingConstraint;
- (id)buttonStackViewTopConstraint;
- (id)buttonStackViewTrailingConstraint;
- (id)buttons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeAllButtons;
- (double)scalingFactor;
- (void)setAdditionalContentMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAxis:(long long)arg1;
- (void)setButtonStackView:(id)arg1;
- (void)setButtonStackViewBottomConstraint:(id)arg1;
- (void)setButtonStackViewLeadingConstraint:(id)arg1;
- (void)setButtonStackViewTopConstraint:(id)arg1;
- (void)setButtonStackViewTrailingConstraint:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setUseEqualInterItemSpacing:(bool)arg1;
- (bool)useEqualInterItemSpacing;

@end
