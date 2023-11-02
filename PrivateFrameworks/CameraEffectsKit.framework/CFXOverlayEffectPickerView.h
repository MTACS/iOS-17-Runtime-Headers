
@interface CFXOverlayEffectPickerView : CFXEffectPickerView <JTCollectionViewDelegate> {
    JTCollectionView * _collectionView;
    JTCollectionViewFlowLayout * _collectionViewLayout;
    UIView * _contentView;
}

@property (nonatomic) JTCollectionView *collectionView;
@property (nonatomic, retain) JTCollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionViewLayout;
- (id)contentView;
- (void)didResizeCollectionViewToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)effectPickerCellNibName;
- (id)effectPickerCellReuseIdentifier;
- (id)effectPickerNibName;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)subviewsDidLoad;
- (void)updateThumbnailColumnSizeForCollectionSize;

@end
