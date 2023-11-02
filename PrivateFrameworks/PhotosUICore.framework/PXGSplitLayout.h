
@interface PXGSplitLayout : PXGLayout {
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _additionalUpdateFlags;
    bool  _allowsRepeatedSublayoutsUpdates;
    PXGLayout * _firstSublayout;
    bool  _floatingModesRespectSafeArea;
    double  _interlayoutSpacing;
    bool  _isPerformingAdditionalUpdate;
    bool  _isUpdatingSublayouts;
    long long  _mode;
    long long  _objectReferenceLookup;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _presentedPadding;
    PXGLayout * _secondSublayout;
    bool  _settingSublayouts;
    bool  _shouldExcludeTopAndBottomPaddingFromReferenceSize;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) bool allowsRepeatedSublayoutsUpdates;
@property (nonatomic, retain) PXGLayout *firstSublayout;
@property (nonatomic, readonly) long long firstSublayoutIndex;
@property (nonatomic) bool floatingModesRespectSafeArea;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) long long mode;
@property (nonatomic) long long objectReferenceLookup;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } presentedPadding;
@property (nonatomic, retain) PXGLayout *secondSublayout;
@property (nonatomic, readonly) long long secondSublayoutIndex;
@property (nonatomic) bool shouldExcludeTopAndBottomPaddingFromReferenceSize;

- (void).cxx_destruct;
- (void)_performUpdateSublayoutGeometries;
- (void)_replaceSublayout:(id)arg1 withSublayout:(id)arg2 atIndex:(long long)arg3;
- (void)_updateSublayoutGeometries;
- (bool)allowsRepeatedSublayoutsUpdates;
- (bool)definesContextForPointReferences;
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)didChangeSublayoutOrigins;
- (void)didUpdate;
- (void)displayScaleDidChange;
- (id)firstSublayout;
- (long long)firstSublayoutIndex;
- (bool)floatingModesRespectSafeArea;
- (double)interlayoutSpacing;
- (long long)mode;
- (long long)objectReferenceLookup;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })presentedPadding;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)safeAreaInsetsDidChange;
- (void)scrollSpeedRegimeDidChange;
- (long long)scrollableAxis;
- (id)secondSublayout;
- (long long)secondSublayoutIndex;
- (void)setFirstSublayout:(id)arg1;
- (void)setFloatingModesRespectSafeArea:(bool)arg1;
- (void)setInterlayoutSpacing:(double)arg1;
- (void)setMode:(long long)arg1;
- (void)setObjectReferenceLookup:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSecondSublayout:(id)arg1;
- (void)setShouldExcludeTopAndBottomPaddingFromReferenceSize:(bool)arg1;
- (bool)shouldExcludeTopAndBottomPaddingFromReferenceSize;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)update;
- (void)userInterfaceDirectionDidChange;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)willUpdate;

@end
