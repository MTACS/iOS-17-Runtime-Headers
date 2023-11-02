
@interface UIAccessibilityElement : UIResponder <UIAccessibilityIdentification, UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _accessibilityFrameInContainerSpace;
    bool  _areChildrenFocused;
}

@property (nonatomic, readonly) bool _accessibilityUsesFrameInContainerSpace;
@property (nonatomic) id accessibilityContainer;
@property (nonatomic) id accessibilityDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrameInContainerSpace;
@property (nonatomic, retain) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, retain) NSString *accessibilityValue;
@property (nonatomic) bool areChildrenFocused;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion;
@property (nonatomic, readonly, copy) UIFocusEffect *focusEffect;
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier;
@property (nonatomic, readonly) long long focusGroupPriority;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic, readonly) bool isTransparentFocusItem;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool ttriAccessibilityHasTextOperations;
@property (nonatomic, readonly) NSArray *ttriAccessibilityTextOperations;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_destroyFocusLayer;
- (id)_firstViewAncestor;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_updateFocusLayerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameInContainerSpace;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)areChildrenFocused;
- (bool)canBecomeFocused;
- (id)coordinateSpace;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemContainer;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithAccessibilityContainer:(id)arg1;
- (bool)isAccessibilityElement;
- (id)nextResponder;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityFrameInContainerSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAreChildrenFocused:(bool)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (bool)_accessibilityHasTextOperations;
- (id)_accessibilityTextOperations;
- (bool)accessibilityEditOperationAction:(id)arg1;
- (bool)ttriAccessibilityEditOperationAction:(id)arg1;
- (bool)ttriAccessibilityHasTextOperations;
- (id)ttriAccessibilityTextOperations;

// Image: /System/Library/PrivateFrameworks/TeaCharts.framework/TeaCharts

- (id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;
- (bool)_accessibilityDataSeriesIncludesTrendlineInSonification;
- (id)_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesName;
- (double)_accessibilityDataSeriesSonificationDuration;
- (bool)_accessibilityDataSeriesSupportsSonification;
- (bool)_accessibilityDataSeriesSupportsSummarization;
- (id)_accessibilityDataSeriesTitleForAxis:(long long)arg1;
- (long long)_accessibilityDataSeriesType;
- (id)_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1;
- (id)_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;
- (id)_accessibilityDataSeriesValuesForAxis:(long long)arg1;
- (void)_accessibilityDidChangeSonificationPlaybackPosition:(double)arg1;
- (id)tc_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;
- (bool)tc_accessibilityDataSeriesIncludesTrendlineInSonification;
- (id)tc_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesName;
- (double)tc_accessibilityDataSeriesSonificationDuration;
- (bool)tc_accessibilityDataSeriesSupportsSonification;
- (bool)tc_accessibilityDataSeriesSupportsSummarization;
- (id)tc_accessibilityDataSeriesTitleForAxis:(long long)arg1;
- (long long)tc_accessibilityDataSeriesType;
- (id)tc_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;
- (id)tc_accessibilityDataSeriesValuesForAxis:(long long)arg1;
- (void)tc_accessibilityDidChangeSonificationPlaybackPosition:(double)arg1;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityProxyView;
- (bool)_accessibilityViewIsVisible;
- (id)accessibilityDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)dataForKey:(id)arg1;
- (void)delegateSpecificsForAttribute:(long long)arg1 delegate:(id*)arg2 selector:(SEL*)arg3;
- (void)setAccessibilityDelegate:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1 forAttribute:(long long)arg2 withSelector:(SEL)arg3;
- (void)setTableCellYOffset:(float)arg1;

@end
