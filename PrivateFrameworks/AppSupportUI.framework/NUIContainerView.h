
@interface NUIContainerView : UIView {
    struct map<UIView *, _NUIContainerViewArrangedSubview, std::less<UIView *>, std::allocator<std::pair<UIView *const, _NUIContainerViewArrangedSubview>>> { 
        struct __tree<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>>, std::allocator<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _arrangedSubviewInfo;
    NSMutableArray * _arrangedSubviews;
    struct { 
        unsigned int hiddenArrangedSubviewCount : 16; 
        unsigned int delaydInvalidation : 8; 
        unsigned int batchDepth : 4; 
        unsigned int inLayoutPass : 2; 
        unsigned int inMeasurementPass : 2; 
        unsigned int layoutDependency : 2; 
        unsigned int removalPolicy : 2; 
        unsigned int removalPolicyHasBeenSet : 1; 
        unsigned int additionPolicy : 1; 
        unsigned int inEnsureArranged : 1; 
        unsigned int inEffectiveSize : 1; 
        unsigned int hasMargins : 1; 
        unsigned int debugBoundingBoxes : 1; 
        unsigned int baselineRelative : 1; 
        unsigned int layoutMarginsRelative : 1; 
        unsigned int baselineLayoutMargins : 1; 
        unsigned int mustRestart : 1; 
        unsigned int delegateSystemLayoutSizeFittingSizeForArrangedSubview : 1; 
        unsigned int delegateLayoutFrameForArrangedSubview : 1; 
        unsigned int delegateWillMeasureFitting : 1; 
        unsigned int delegateShouldRestart : 1; 
        unsigned int delegateDidLayout : 1; 
    }  _containerFlags;
    /* Warning: unhandled struct encoding: '{vector<CALayer *, std::allocator<CALayer *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<CALayer **, std::allocator<CALayer *>>="__value_"^@}}' */ struct vector<CALayer *, std::allocator<CALayer *>> { 
        __end_ **__begin_; 
    }  _debugBoundingBoxLayers;
    <NUIContainerViewDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _effectiveLayoutMargins;
    UIView * _firstBaselineView;
    bool  _isRTL;
    UIView * _lastBaselineView;
    NSArray * _visibleArrangedSubviews;
}

@property (nonatomic) long long arrangedSubviewAdditionPolicy;
@property (nonatomic) long long arrangedSubviewRemovalPolicy;
@property (nonatomic, copy) NSArray *arrangedSubviews;
@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (getter=hasBaselineRelativeLayoutMarginsForArrangement, nonatomic) bool baselineRelativeLayoutMarginsForArrangement;
@property (getter=isDebugBoundingBoxesEnabled, nonatomic) bool debugBoundingBoxesEnabled;
@property (nonatomic) <NUIContainerViewDelegate> *delegate;
@property (getter=isLayoutMarginsRelativeArrangement, nonatomic) bool layoutMarginsRelativeArrangement;
@property (nonatomic, readonly) NSArray *visibleArrangedSubviews;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

+ (id)debugVersion;
+ (bool)enableAPIMisuseAssertions;
+ (void)initialize;
+ (bool)isDebugBoundingBoxesEnabled;
+ (Class)layerClass;
+ (bool)requiresConstraintBasedLayout;
+ (void)setEnableAPIMisuseAssertions:(bool)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (bool)_isContainerView;
- (bool)_layoutHeightDependsOnWidth;
- (struct CGSize { double x1; double x2; })_layoutSizeThatFits:(struct CGSize { double x1; double x2; })arg1 fixedAxes:(unsigned long long)arg2;
- (void)addArrangedSubview:(id)arg1;
- (long long)alignmentForView:(id)arg1 inAxis:(long long)arg2;
- (id)arrangedDebugDescription;
- (long long)arrangedSubviewAdditionPolicy;
- (long long)arrangedSubviewRemovalPolicy;
- (id)arrangedSubviews;
- (void)assertNotInLayoutPass:(bool)arg1;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (bool)canCancelMeasurementForCompression;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDictionary;
- (id)debugDictionaryForVisibleArrangedSubview:(id)arg1;
- (id)debugSetDelegateRespondsToSelectors;
- (id)debugSetEnabledFlags;
- (id)delegate;
- (id)description;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveLayoutBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveLayoutMargins;
- (struct CGSize { double x1; double x2; })effectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)ensureArrangedSubviewsAreValid;
- (bool)hasBaselineRelativeLayoutMarginsForArrangement;
- (unsigned long long)indexOfArrangedSubview:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1;
- (void)invalidateInternalStateForInvalidation:(long long)arg1;
- (void)invalidateIntrinsicContentSize;
- (bool)isBaselineRelativeArrangement;
- (bool)isDebugBoundingBoxesEnabled;
- (bool)isInBatchUpdate;
- (bool)isLayoutMarginsRelativeArrangement;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })minimumSpacingAdjacentToView:(id)arg1;
- (bool)mustRestartMeasurement;
- (bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performBatchUpdates:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })positionAdjustmentOffsetForView:(id)arg1;
- (void)removeArrangedSubview:(id)arg1;
- (void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2;
- (void)setAlignment:(long long)arg1 forView:(id)arg2 inAxis:(long long)arg3;
- (void)setArrangedSubviewAdditionPolicy:(long long)arg1;
- (void)setArrangedSubviewRemovalPolicy:(long long)arg1;
- (void)setArrangedSubviews:(id)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setBaselineRelativeLayoutMarginsForArrangement:(bool)arg1;
- (void)setDebugBoundingBoxesEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMarginsRelativeArrangement:(bool)arg1;
- (void)setMinimumSpacing:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 adjacentToView:(id)arg2;
- (bool)setNeedsInvalidation:(long long)arg1;
- (void)setNeedsLayout;
- (void)setPositionAdjustmentOffset:(struct CGPoint { double x1; double x2; })arg1 forView:(id)arg2;
- (bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)visibilityDidChangeForArrangedSubview:(id)arg1;
- (id)visibleArrangedSubviews;
- (void)willRemoveSubview:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (void)ttr_insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)ttr_replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2;

@end
