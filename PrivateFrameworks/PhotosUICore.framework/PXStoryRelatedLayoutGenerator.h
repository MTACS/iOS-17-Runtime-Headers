
@interface PXStoryRelatedLayoutGenerator : PXLayoutGenerator {
    long long  _capacity;
    bool  _isContentScrolledIntoView;
    bool  _isPrepared;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _itemFrames;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _scrollableOutsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) bool isContentScrolledIntoView;
@property (nonatomic, copy) PXStoryRelatedLayoutMetrics *metrics;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollableOutsets;

+ (long long)_preferredNumberOfItemsForUserInterfaceIdiom:(long long)arg1;
+ (bool)isExpectedKeyItemAtIndex:(long long)arg1;
+ (long long)preferredNumberOfItemsForExtendedTraitCollection:(id)arg1;

- (const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_framesForItemInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_prepareIfNeeded;
- (void)adjustTargetScrollOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 forVelocity:(struct CGPoint { double x1; double x2; })arg2 currentScrollOffset:(struct CGPoint { double x1; double x2; })arg3 shouldHideContent:(out bool*)arg4;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (void)getFrames:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (bool)isContentScrolledIntoView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollableOutsets;
- (struct CGSize { double x1; double x2; })size;

@end
