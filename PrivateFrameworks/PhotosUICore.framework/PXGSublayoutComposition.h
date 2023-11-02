
@interface PXGSublayoutComposition : NSObject {
    PXGCompositeLayout * _compositeLayout;
    long long  _lastSublayoutDataStoreVersion;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    PXGSublayoutDataStore * _sublayoutDataStore;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic) PXGCompositeLayout *compositeLayout;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic) long long lastSublayoutDataStoreVersion;
@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) long long numberOfSublayouts;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, retain) PXGSublayoutDataStore *sublayoutDataStore;
@property (nonatomic, readonly) struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; unsigned short x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_6_1_1; double x_6_1_2; } x6; double x7; }*sublayoutGeometries;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (long long)anchorSublayoutIndexForAnchoredContentEdges:(unsigned long long)arg1;
- (id)compositeLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)enumerateSublayoutProvidersForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)invalidateEstimatedSublayoutGeometries;
- (void)invalidateSublayoutAttributes;
- (void)invalidateSublayoutContentSizes;
- (long long)lastSublayoutDataStoreVersion;
- (id)layout;
- (long long)numberOfSublayouts;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)referenceSizeDidChange;
- (void)setCompositeLayout:(id)arg1;
- (void)setLastSublayoutDataStoreVersion:(long long)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSublayoutDataStore:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sublayoutDataStore;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; unsigned short x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_6_1_1; double x_6_1_2; } x6; double x7; }*)sublayoutGeometries;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sublayoutInsetsForStylableType:(long long)arg1;
- (void)updateEstimate;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutAttributes;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)visibleRectDidChange;

@end
