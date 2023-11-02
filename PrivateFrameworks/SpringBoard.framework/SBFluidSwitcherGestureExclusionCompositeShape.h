
@interface SBFluidSwitcherGestureExclusionCompositeShape : NSObject <SBFluidSwitcherGestureExclusionShape> {
    bool  _allowHorizontalSwipesInsideShapes;
    NSArray * _rects;
    double  _topEdgeY;
}

@property (nonatomic) bool allowHorizontalSwipesInsideShapes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *rects;
@property (readonly) Class superclass;
@property (nonatomic) double topEdgeY;

+ (id)exclusionCompositeShapeWithRects:(id)arg1 allowHorizontalSwipes:(bool)arg2;

- (void).cxx_destruct;
- (bool)allowHorizontalSwipesInsideShapes;
- (id)debugView;
- (id)rects;
- (void)setAllowHorizontalSwipesInsideShapes:(bool)arg1;
- (void)setRects:(id)arg1;
- (void)setTopEdgeY:(double)arg1;
- (bool)shouldBeginGestureAtStartingPoint:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)topEdgeY;

@end
