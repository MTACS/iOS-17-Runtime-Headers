
@interface UIFocusGuide : UILayoutGuide <UIFocusItem, _UIFocusGuideRegionDelegate, _UIFocusRegionContainer, _UILegacyFocusRegion> {
    bool  _automaticallyDisableWhenIntersectingFocus;
    bool  _automaticallyPreferOwningView;
    bool  _didSetPreferredFocusedEnvironments;
    bool  _enabled;
    NSArray * _preferredFocusEnvironments;
}

@property (nonatomic) bool areChildrenFocused;
@property (getter=_automaticallyDisableWhenIntersectingFocus, setter=_setAutomaticallyDisableWhenIntersectingFocus:, nonatomic) bool automaticallyDisableWhenIntersectingFocus;
@property (getter=_automaticallyPreferOwningView, setter=_setAutomaticallyPreferOwningView:, nonatomic) bool automaticallyPreferOwningView;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly, copy) UIFocusEffect *focusEffect;
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier;
@property (nonatomic, readonly) long long focusGroupPriority;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) <UIFocusItem> *focusItemForSorting;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTransparentFocusItem;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_automaticallyDisableWhenIntersectingFocus;
- (bool)_automaticallyPreferOwningView;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)_didUpdateFocusToPreferredFocusedView;
- (id)_encodablePreferredFocusEnvironments;
- (id)_focusDebugOverlayParentView;
- (float)_focusPriority;
- (id)_focusRegionFocusSystem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (id)_fulfillPromisedFocusRegion;
- (bool)_ignoresSpeedBumpEdges;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isPromiseFocusRegion;
- (bool)_isTransparentFocusRegion;
- (bool)_isUnclippable;
- (bool)_isUnoccludable;
- (bool)_legacy_isEligibleForFocusInteraction;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_setAutomaticallyDisableWhenIntersectingFocus:(bool)arg1;
- (void)_setAutomaticallyPreferOwningView:(bool)arg1;
- (bool)_uili_isFocusGuide;
- (bool)canBecomeFocused;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;
- (void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2;
- (id)focusItemContainer;
- (id)focusItemForSorting;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (void)setEnabled:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setPreferredFocusEnvironments:(id)arg1;
- (void)setPreferredFocusedView:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (id)smu_focusContainerGuide;

@end
