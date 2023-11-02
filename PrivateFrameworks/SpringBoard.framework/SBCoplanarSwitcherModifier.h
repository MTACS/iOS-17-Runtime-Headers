
@interface SBCoplanarSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _activeAppLayout;
    double  _scale;
    long long  _spacingType;
    bool  _usesContainerViewBoundsAsActiveFrame;
}

@property (nonatomic) double scale;
@property (nonatomic) long long spacingType;
@property (nonatomic) bool usesContainerViewBoundsAsActiveFrame;

- (void).cxx_destruct;
- (long long)_indexOfActiveAppLayout;
- (double)_offscreenSpacing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithActiveAppLayout:(id)arg1;
- (double)scale;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSpacingType:(long long)arg1;
- (void)setUsesContainerViewBoundsAsActiveFrame:(bool)arg1;
- (long long)spacingType;
- (bool)usesContainerViewBoundsAsActiveFrame;

@end
