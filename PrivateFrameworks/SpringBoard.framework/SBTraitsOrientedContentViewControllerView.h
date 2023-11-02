
@interface SBTraitsOrientedContentViewControllerView : SBFTouchPassThroughView <BSDescriptionProviding> {
    UIView * _backgroundView;
    long long  _containerOrientation;
    long long  _contentOrientation;
    SBTraitsDirectionalRotationView * _contentRotationView;
    UIView * _contentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentViewBoundsInReferenceSpace;
    UILabel * _placeholderLabel;
    long long  _previousContainerLayoutOrientation;
    long long  _previousContentLayoutOrientation;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) long long containerOrientation;
@property (nonatomic) long long contentOrientation;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentViewBoundsInReferenceSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_counterTransformedToIdentityForContainerChange;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setDebugColorsEnabled:(bool)arg1;
- (id)backgroundView;
- (long long)containerOrientation;
- (long long)contentOrientation;
- (id)contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentViewBoundsInReferenceSpace;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setContainerOrientation:(long long)arg1;
- (void)setContentOrientation:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewBoundsInReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
