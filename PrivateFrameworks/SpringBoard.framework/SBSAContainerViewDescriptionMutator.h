
@interface SBSAContainerViewDescriptionMutator : SBSAViewDescriptionMutator

@property (nonatomic, copy) <SAElementIdentifying> *associatedSystemApertureElementIdentity;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentCenter;
@property (nonatomic) struct CGSize { double x1; double x2; } contentScale;
@property (nonatomic) long long keyLineMode;
@property (nonatomic, copy) UIColor *keyLineTintColor;
@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; } renderingConfiguration;
@property (nonatomic) long long sampledBackgroundLuminanceLevel;
@property (nonatomic) long long shadowStyle;

- (id)_containerViewDescription;
- (id)associatedSystemApertureElementIdentity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGPoint { double x1; double x2; })contentCenter;
- (struct CGSize { double x1; double x2; })contentScale;
- (long long)keyLineMode;
- (id)keyLineTintColor;
- (struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })renderingConfiguration;
- (long long)sampledBackgroundLuminanceLevel;
- (void)setAssociatedSystemApertureElementIdentity:(id)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setKeyLineMode:(long long)arg1;
- (void)setKeyLineTintColor:(id)arg1;
- (void)setRenderingConfiguration:(struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })arg1;
- (void)setSampledBackgroundLuminanceLevel:(long long)arg1;
- (void)setShadowStyle:(long long)arg1;
- (long long)shadowStyle;

@end
