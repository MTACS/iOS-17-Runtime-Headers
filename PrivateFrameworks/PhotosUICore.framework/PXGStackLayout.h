
@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    bool  _alignsFirstSublayoutToVisibleTopEdge;
    bool  _alignsLastSublayoutToVisibleBottomEdge;
    long long  _axis;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _faultInOutsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _faultOutOutsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _flexibleRegionInsets;
    double  _interlayoutSpacing;
    bool  _isUpdatingSublayouts;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _postUpdateFlags;
    <PXGSublayoutFaultingDelegate> * _sublayoutFaultingDelegate;
    struct { double x1; double x2; double x3; } * _sublayoutOriginsBeforeUpdate;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) bool alignsFirstSublayoutToVisibleTopEdge;
@property (nonatomic) bool alignsLastSublayoutToVisibleBottomEdge;
@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } faultInOutsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } faultOutOutsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) <PXGSublayoutFaultingDelegate> *sublayoutFaultingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)_invalidateFirstFloatingLayout;
- (void)_updateFirstFloatingLayout;
- (void)_updateInterlayoutSpacing;
- (void)_updateSublayouts;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalSafeAreaInsetsForSublayout:(id)arg1;
- (bool)alignsFirstSublayoutToVisibleTopEdge;
- (bool)alignsLastSublayoutToVisibleBottomEdge;
- (long long)axis;
- (void)dealloc;
- (bool)definesContextForPointReferences;
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)didUpdate;
- (void)displayScaleDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })faultInOutsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })faultOutOutsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })flexibleRegionInsets;
- (id)init;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (double)interlayoutSpacing;
- (void)invalidateAdditionalSafeAreaInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)scrollSpeedRegimeDidChange;
- (long long)scrollableAxis;
- (void)setAlignsFirstSublayoutToVisibleTopEdge:(bool)arg1;
- (void)setAlignsLastSublayoutToVisibleBottomEdge:(bool)arg1;
- (void)setAxis:(long long)arg1;
- (void)setFaultInOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFaultOutOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInterlayoutSpacing:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSublayoutFaultingDelegate:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (id)sublayoutFaultingDelegate;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)update;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)willUpdate;

@end
