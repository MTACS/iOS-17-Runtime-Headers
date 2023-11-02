
@interface _UISystemBackgroundView : UIView {
    UIView * _colorView;
    <_UIBackgroundConfigurationInternal> * _configuration;
    double  _currentlyAppliedCornerRadius;
    UIImageView * _imageView;
    UIView * _shadowView;
    _UISystemBackgroundStrokeView * _strokeView;
    unsigned char  _subviewInsertionIndices;
    struct { 
        unsigned int currentlyAppliedCornersAreContinuous : 1; 
        unsigned int didSetCustomViewMasking : 1; 
    }  _systemBackgroundViewFlags;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, copy) <_UIBackgroundConfigurationInternal> *configuration;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_encodableSubviews;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)configuration;
- (id)currentBackgroundColor;
- (id)currentVisiblePathInContainerView:(id)arg1;
- (id)description;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveInsetsInContainerView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInContainerView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (id)outlinePathInContainerView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)shapeInContainerView:(id)arg1;
- (void)tintColorDidChange;

@end
