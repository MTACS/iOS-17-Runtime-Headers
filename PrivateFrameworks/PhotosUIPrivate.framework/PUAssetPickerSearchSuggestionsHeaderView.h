
@interface PUAssetPickerSearchSuggestionsHeaderView : UIView <UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    <PUAssetPickerSearchSuggestionsSelectionDelegate> * _suggestionsSelectionDelegate;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUAssetPickerSearchSuggestionsSelectionDelegate> *suggestionsSelectionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithCollectionView:(id)arg1 dataSource:(id)arg2;
- (void)setSuggestionsSelectionDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)suggestionsSelectionDelegate;

@end
