
@interface SBFluidSwitcherGestureExclusionTrapezoid : NSObject <SBFluidSwitcherGestureExclusionShape> {
    double  _adjacentBaseXDistanceFromEdge;
    bool  _allowHorizontalSwipesOutsideTrapezoid;
    double  _baseHeight;
    double  _opposingBaseXDistanceFromEdge;
    double  _trapezoidHeight;
}

@property (nonatomic) double adjacentBaseXDistanceFromEdge;
@property (nonatomic) bool allowHorizontalSwipesOutsideTrapezoid;
@property (nonatomic) double baseHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double opposingBaseXDistanceFromEdge;
@property (readonly) Class superclass;
@property (nonatomic) double trapezoidHeight;

+ (id)exclusionTrapezoidWithBaseHeight:(double)arg1 trapezoidHeight:(double)arg2 adjacentBaseXDistanceFromEdge:(double)arg3 opposingBaseXDistanceFromEdge:(double)arg4 allowHorizontalSwipesOutsideTrapezoid:(bool)arg5;

- (double)adjacentBaseXDistanceFromEdge;
- (bool)allowHorizontalSwipesOutsideTrapezoid;
- (double)baseHeight;
- (id)debugView;
- (double)opposingBaseXDistanceFromEdge;
- (void)setAdjacentBaseXDistanceFromEdge:(double)arg1;
- (void)setAllowHorizontalSwipesOutsideTrapezoid:(bool)arg1;
- (void)setBaseHeight:(double)arg1;
- (void)setOpposingBaseXDistanceFromEdge:(double)arg1;
- (void)setTrapezoidHeight:(double)arg1;
- (bool)shouldBeginGestureAtStartingPoint:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)trapezoidHeight;

@end
