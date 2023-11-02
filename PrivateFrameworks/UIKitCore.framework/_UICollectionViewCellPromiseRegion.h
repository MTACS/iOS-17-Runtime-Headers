
@interface _UICollectionViewCellPromiseRegion : NSObject <UIFocusItem, _UIFocusItemContainerPrivate, _UIFocusRegionContainer, _UILegacyFocusRegion> {
    UICollectionView * _collectionView;
    UICollectionViewLayoutAttributes * _layoutAttributes;
    UIScrollView * _parentScrollView;
}

@property (nonatomic) bool areChildrenFocused;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic) UICollectionView *collectionView;
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
@property (nonatomic, readonly) bool isTransparentFocusItem;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *layoutAttributes;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic) UIScrollView *parentScrollView;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (readonly) Class superclass;

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
- (id)collectionView;
- (id)coordinateSpace;
- (id)createPromiseRegion;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemContainer;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)layoutAttributes;
- (id)parentFocusEnvironment;
- (id)parentScrollView;
- (id)preferredFocusEnvironments;
- (void)setCollectionView:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setParentScrollView:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end
