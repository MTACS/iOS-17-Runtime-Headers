
@interface _UITableViewCellPromiseRegion : NSObject <UIFocusItem, _UIFocusItemContainerPrivate, _UIFocusRegionContainer, _UILegacyFocusRegion> {
    NSIndexPath * _indexPath;
    UITableView * _tableView;
}

@property (nonatomic) bool areChildrenFocused;
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
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, readonly) bool isTransparentFocusItem;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionFocusSystem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (id)_fulfillPromisedFocusRegion;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isLazyFocusItemContainer;
- (bool)_isPromiseFocusRegion;
- (bool)_isTransparentFocusRegion;
- (bool)_legacy_isEligibleForFocusInteraction;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (bool)canBecomeFocused;
- (id)coordinateSpace;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemContainer;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)indexPath;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setIndexPath:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setTableView:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)tableView;
- (void)updateFocusIfNeeded;

@end
