
@interface PXGZoomLayout : PXGLayout {
    id  _anchorObjectReference;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorViewportCenter;
    bool  _isUpdatingSublayouts;
    NSArray * _layers;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    PXGLayout * _primaryLayer;
    bool  _settingSublayouts;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, retain) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorViewportCenter;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) PXGLayout *primaryLayer;

- (void).cxx_destruct;
- (void)_configureSublayouts;
- (void)_updateSublayoutGeometries;
- (id)anchorObjectReference;
- (struct CGPoint { double x1; double x2; })anchorViewportCenter;
- (id)axSpriteIndexes;
- (void)didChangeSublayoutOrigins;
- (void)displayScaleDidChange;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)arg1;
- (id)init;
- (long long)itemForSpriteIndex:(unsigned int)arg1;
- (id)layers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)primaryLayer;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)safeAreaInsetsDidChange;
- (void)scrollSpeedRegimeDidChange;
- (long long)scrollableAxis;
- (void)setAnchorObjectReference:(id)arg1;
- (void)setAnchorViewportCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayers:(id)arg1 primaryLayer:(id)arg2;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)update;
- (void)userInterfaceDirectionDidChange;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;

@end
