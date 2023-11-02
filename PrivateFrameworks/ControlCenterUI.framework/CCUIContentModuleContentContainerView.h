
@interface CCUIContentModuleContentContainerView : SBFTouchPassThroughView {
    double  _compactContinuousCornerRadius;
    bool  _expanded;
    double  _expandedContinuousCornerRadius;
    MTMaterialView * _moduleMaterialView;
    bool  _moduleProvidesOwnPlatter;
}

@property (nonatomic) double compactContinuousCornerRadius;
@property (nonatomic) double expandedContinuousCornerRadius;
@property (nonatomic) bool moduleProvidesOwnPlatter;

- (void).cxx_destruct;
- (void)_configureModuleMaterialViewIfNecessary;
- (bool)_isContentClippingRequiredForSubview:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1 ignoreSubviewClipping:(bool)arg2;
- (void)_transitionToExpandedMode:(bool)arg1 force:(bool)arg2;
- (void)addSubview:(id)arg1;
- (double)compactContinuousCornerRadius;
- (void)didEndTransitionToExpandedMode:(bool)arg1;
- (double)expandedContinuousCornerRadius;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)moduleProvidesOwnPlatter;
- (void)setCompactContinuousCornerRadius:(double)arg1;
- (void)setExpandedContinuousCornerRadius:(double)arg1;
- (void)setModuleProvidesOwnPlatter:(bool)arg1;
- (void)transitionToExpandedMode:(bool)arg1;

@end
