
@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout, _UIVisualStyleStylable> {
    UIColor * _atomBackgroundColor;
    _UISearchAtomBackgroundView * _backgroundView;
    UIColor * _customAtomForegroundColor;
    NSArray * _defaultConstraints;
    struct { 
        unsigned int enabled : 1; 
    }  _flags;
    NSLayoutConstraint * _imageBaselineConstraint;
    NSLayoutConstraint * _imageCenterYConstraint;
    UIImageView * _leadingImage;
    NSLayoutConstraint * _maximumAtomWidthConstraint;
    UILabel * _textLabel;
    _UISearchAtomViewVisualStyle * _visualStyle;
    NSArray * _withImageConstraints;
    NSArray * _withoutImageConstraints;
}

@property (setter=_setAtomForegroundColor:, nonatomic, retain) UIColor *_atomForegroundColor;
@property (nonatomic, retain) UIColor *atomBackgroundColor;
@property (nonatomic, retain) UIFont *atomFont;
@property (nonatomic, retain) _UISearchAtomBackgroundView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *defaultConstraints;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *imageBaselineConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imageCenterYConstraint;
@property (retain) UIImageView *leadingImage;
@property (nonatomic, retain) NSLayoutConstraint *maximumAtomWidthConstraint;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionBounds;
@property (nonatomic) long long selectionStyle;
@property (readonly) Class superclass;
@property (retain) UILabel *textLabel;
@property (nonatomic) double viewportWidth;
@property (nonatomic, readonly) _UISearchAtomViewVisualStyle *visualStyle;
@property (nonatomic, copy) NSArray *withImageConstraints;
@property (nonatomic, copy) NSArray *withoutImageConstraints;

+ (id)_defaultAtomForegroundColorForTraitCollection:(id)arg1;
+ (id)defaultAtomBackgroundColorForTraitCollection:(id)arg1;
+ (bool)requiresConstraintBasedLayout;
+ (id)visualStyleRegistryIdentity;

- (void).cxx_destruct;
- (id)_atomForegroundColor;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_setAtomForegroundColor:(id)arg1;
- (void)_updateColors;
- (id)atomBackgroundColor;
- (id)atomFont;
- (id)backgroundView;
- (id)defaultConstraints;
- (id)imageBaselineConstraint;
- (id)imageCenterYConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (id)leadingImage;
- (id)maximumAtomWidthConstraint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBounds;
- (long long)selectionStyle;
- (void)setAtomBackgroundColor:(id)arg1;
- (void)setAtomFont:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDefaultConstraints:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setImageBaselineConstraint:(id)arg1;
- (void)setImageCenterYConstraint:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setMaximumAtomWidthConstraint:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionStyle:(long long)arg1 animated:(bool)arg2;
- (void)setTextLabel:(id)arg1;
- (void)setViewportWidth:(double)arg1;
- (void)setWithImageConstraints:(id)arg1;
- (void)setWithoutImageConstraints:(id)arg1;
- (id)textLabel;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;
- (double)viewportWidth;
- (id)visualStyle;
- (id)withImageConstraints;
- (id)withoutImageConstraints;

@end
