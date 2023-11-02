
@interface TUIPressAndHoldGrid : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _accentVariants;
    UICollectionView * _collectionView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <TUIPressAndHoldGridDelegate> * _delegate;
    NSIndexPath * _selectedIndexPath;
}

@property (nonatomic, readonly) NSArray *accentVariants;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUIPressAndHoldGridDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSIndexPath *firstIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *lastIndexPath;
@property (nonatomic, readonly) NSString *selectedAccentVariant;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accentAtIndexPath:(id)arg1;
- (unsigned long long)accentVariantNumberForIndexPath:(id)arg1;
- (id)accentVariants;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)delegate;
- (id)firstIndexPath;
- (void)forceUpdateVisibleCells;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (bool)handleSelection;
- (bool)hasAccentVariantInForwardDirection:(bool)arg1;
- (id)indexPathForAccentVariantNumber:(unsigned long long)arg1;
- (id)indexPathInForwardDirection:(bool)arg1;
- (bool)indexPathIsValid:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 accentVariants:(id)arg2;
- (id)lastIndexPath;
- (void)layoutSubviews;
- (id)selectedAccentVariant;
- (id)selectedIndexPath;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)showAccentVariantInForwardDirection:(bool)arg1;
- (id)visibleAttributes;

@end
