
@interface PXGAbsoluteCompositeLayout : PXGCompositeLayout {
    _PXGAbsoluteSublayoutComposition * _absoluteComposition;
}

@property (nonatomic, readonly) _PXGAbsoluteSublayoutComposition *absoluteComposition;
@property (nonatomic) bool shouldUpdateSublayoutsInStrictOrder;

- (void).cxx_destruct;
- (id)absoluteComposition;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSublayoutAtIndex:(long long)arg2;
- (void)setFrames:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1 forSublayoutAtIndex:(long long)arg2;
- (void)setOrigins:(const struct CGPoint { double x1; double x2; }*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setReferenceDepth:(double)arg1 forSublayoutAtIndex:(long long)arg2;
- (void)setReferenceDepths:(const double*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setShouldUpdateSublayoutsInStrictOrder:(bool)arg1;
- (void)setSpriteTransform:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; double x2; })arg1 forSublayoutAtIndex:(long long)arg2;
- (void)setZPosition:(double)arg1 forSublayoutAtIndex:(long long)arg2;
- (void)setZPositions:(const double*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)shouldUpdateSublayoutsInStrictOrder;

@end
