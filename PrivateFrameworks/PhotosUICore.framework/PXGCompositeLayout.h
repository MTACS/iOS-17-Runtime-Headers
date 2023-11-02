
@interface PXGCompositeLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    bool  _allowsRepeatedSublayoutsUpdates;
    PXGSublayoutComposition * _composition;
    long long * _currentSingleLayouts;
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
    bool  _isUpdatingSublayouts;
    bool * _pendingAnimations;
    long long * _pendingSingleLayouts;
    <PXGSublayoutFaultingDelegate> * _sublayoutFaultingDelegate;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) bool allowsRepeatedSublayoutsUpdates;
@property (nonatomic, retain) PXGSublayoutComposition *composition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } faultInOutsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } faultOutOutsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXGSublayoutFaultingDelegate> *sublayoutFaultingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCustomAlphaForSublayouts;

- (void).cxx_destruct;
- (void)_invalidateStylableType:(long long)arg1;
- (void)_invalidateSublayouts;
- (void)_updateSublayoutOfStylableType:(long long)arg1;
- (void)_updateSublayouts;
- (bool)allowsRepeatedSublayoutsUpdates;
- (double)alphaForSublayout:(id)arg1 atIndex:(long long)arg2;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)composition;
- (void)compositionDidChange;
- (void)dealloc;
- (bool)definesContextForPointReferences;
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)didApplySublayoutChangeDetails:(id)arg1 axAdjustedSubgroupChangeDetails:(id)arg2 countAfterChanges:(long long)arg3;
- (void)didUpdate;
- (void)didUpdateSublayouts;
- (void)displayScaleDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })faultInOutsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })faultOutOutsets;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)invalidateSublayouts;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void)setComposition:(id)arg1;
- (void)setFaultInOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFaultOutOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSublayoutFaultingDelegate:(id)arg1;
- (void)setSublayoutIndex:(long long)arg1 forUniquelyStylableType:(long long)arg2 animated:(bool)arg3;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (id)sublayoutFaultingDelegate;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)update;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;
- (bool)wantsCustomAlphaForSublayouts;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)willUpdate;

@end
