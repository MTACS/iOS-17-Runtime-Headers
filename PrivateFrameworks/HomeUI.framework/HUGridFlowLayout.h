
@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout> {
    NSHashTable * _childGridLayouts;
    NSMutableDictionary * _indexPathsByItems;
    HUGridLayoutOptions * _layoutOptions;
    NSMutableDictionary * _overrideAttributesByIndexPath;
    HUGridFlowLayout * _parentGridLayout;
    bool  _shouldFlipForRTL;
}

@property (nonatomic, retain) NSHashTable *childGridLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *indexPathsByItems;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, readonly) NSMutableDictionary *overrideAttributesByIndexPath;
@property (nonatomic) HUGridFlowLayout *parentGridLayout;
@property (nonatomic, readonly) bool shouldFlipForRTL;
@property (readonly) Class superclass;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)_modifiedLayoutAttributesForAttributes:(id)arg1;
- (void)_updateContainingGridLayout;
- (void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3;
- (id)childGridLayouts;
- (void)clearAllOverrideAttributesForItems:(id)arg1;
- (void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)indexPathsByItems;
- (id)init;
- (id)initForRTL:(bool)arg1;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutOptions;
- (id)overrideAttributesByIndexPath;
- (id)parentGridLayout;
- (void)prepareLayout;
- (void)registerChildGridLayout:(id)arg1;
- (void)setChildGridLayouts:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setParentGridLayout:(id)arg1;
- (bool)shouldFlipForRTL;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)unregisterChildGridLayout:(id)arg1;

@end
