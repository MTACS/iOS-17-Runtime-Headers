
@interface PXGTransitioningLayout : PXGAbsoluteCompositeLayout {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrameOverride;
    PXGLayout * _contentLayout;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrameOverride;
@property (nonatomic, readonly) PXGLayout *contentLayout;

- (void).cxx_destruct;
- (void)_invalidateSublayoutPositions;
- (void)_updateSublayoutPositions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameOverride;
- (id)contentLayout;
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)arg1;
- (bool)disableDebugAssertionForAnchorUpdatesWithZeroContentSize;
- (id)init;
- (id)initWithContentLayout:(id)arg1;
- (void)referenceSizeDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (long long)scrollableAxis;
- (void)setContentFrameOverride:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (void)update;

@end
