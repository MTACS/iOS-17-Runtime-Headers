
@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer> {
    bool  _allowsLazyLoading;
    _UIFocusEnvironmentContainerTuple * _environmentContainer;
    bool  _shouldCreateRegionForGuideBehavior;
    bool  _shouldCreateRegionForOwningItem;
}

@property (nonatomic) bool allowsLazyLoading;
@property (nonatomic) bool areChildrenFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion;
@property (nonatomic, retain) _UIFocusEnvironmentContainerTuple *environmentContainer;
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (readonly) unsigned long long hash;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic) bool shouldCreateRegionForGuideBehavior;
@property (nonatomic) bool shouldCreateRegionForOwningItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_itemContainer;
- (id)_owningEnvironment;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (bool)allowsLazyLoading;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)environmentContainer;
- (id)focusItemContainer;
- (unsigned long long)hash;
- (id)initWithEnvironmentContainer:(id)arg1;
- (id)initWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setAllowsLazyLoading:(bool)arg1;
- (void)setEnvironmentContainer:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setShouldCreateRegionForGuideBehavior:(bool)arg1;
- (void)setShouldCreateRegionForOwningItem:(bool)arg1;
- (bool)shouldCreateRegionForGuideBehavior;
- (bool)shouldCreateRegionForOwningItem;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end
