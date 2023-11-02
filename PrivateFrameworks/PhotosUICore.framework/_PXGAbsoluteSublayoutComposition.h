
@interface _PXGAbsoluteSublayoutComposition : PXGSublayoutComposition {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _shouldUpdateSublayoutsInStrictOrder;
    long long  _sublayoutCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _sublayoutFrames;
    double * _sublayoutReferenceDepths;
    struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; double x2; } * _sublayoutSpriteTransforms;
    double * _sublayoutZPositions;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) bool shouldUpdateSublayoutsInStrictOrder;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (void)insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrames:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setOrigins:(const struct CGPoint { double x1; double x2; }*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setReferenceDepths:(const double*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setShouldUpdateSublayoutsInStrictOrder:(bool)arg1;
- (void)setSpriteTransforms:(const struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; double x2; }*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setZPositions:(const double*)arg1 forSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)shouldUpdateSublayoutsInStrictOrder;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(id /* block */)arg2;

@end
