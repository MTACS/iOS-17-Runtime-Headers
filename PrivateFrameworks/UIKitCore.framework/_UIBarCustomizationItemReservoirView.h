
@interface _UIBarCustomizationItemReservoirView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    _UIShapeView * _arrowView;
    UICollectionView * _collectionView;
    bool  _computedInitialSize;
    UIView * _containerView;
    bool  _isEmpty;
    NSMutableArray * _items;
    UILabel * _noContentLabel;
    _UIDiffuseShadowView * _shadowView;
    UILabel * _tipLabel;
    UINavigationBar * _topBar;
}

@property (nonatomic, retain) _UIShapeView *arrowView;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) UILabel *noContentLabel;
@property (nonatomic, retain) _UIDiffuseShadowView *shadowView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *tipLabel;
@property (nonatomic, retain) UINavigationBar *topBar;

- (void).cxx_destruct;
- (id)_collectionView:(id)arg1 layout:(id)arg2 flowLayoutRowAlignmentOptionsForSection:(long long)arg3;
- (double)_minimumLineSpacing;
- (void)_updateArrowColor;
- (void)_updateEmptyState;
- (void)addItem:(id)arg1;
- (id)arrowView;
- (bool)canBecomeFirstResponder;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)containerView;
- (id)flowLayout;
- (id)initWithItems:(id)arg1;
- (void)invalidateLayoutAndForceUpdate:(bool)arg1;
- (id)items;
- (void)layoutSubviews;
- (id)noContentLabel;
- (void)removeItem:(id)arg1;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDoneAction:(id)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setItems:(id)arg1;
- (void)setNoContentLabel:(id)arg1;
- (void)setResetAction:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (void)setTopBar:(id)arg1;
- (id)shadowView;
- (void)sizeToFit;
- (id)tipLabel;
- (id)topBar;

@end
