
@interface ICAudioBarView : UIView {
    CALayer * _borderLayer;
    UIButton * _doneButton;
    NSLayoutConstraint * _heightConstraint;
    double  _oldWidth;
}

@property (nonatomic, retain) CALayer *borderLayer;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic) double height;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) double oldWidth;

- (void).cxx_destruct;
- (bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (long long)accessibilityContainerType;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)borderLayer;
- (id)doneButton;
- (double)height;
- (id)heightConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)oldWidth;
- (void)setBorderLayer:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setOldWidth:(double)arg1;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayoutMargins;

@end
