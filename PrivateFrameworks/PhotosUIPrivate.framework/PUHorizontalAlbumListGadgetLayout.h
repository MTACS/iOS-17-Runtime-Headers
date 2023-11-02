
@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout {
    <PUHorizontalAlbumListGadgetLayoutDelegate> * _horizontalLayoutDelegate;
    bool  _showsHorizontalScrollIndicator;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } albumCellSize;
@property (nonatomic) <PUHorizontalAlbumListGadgetLayoutDelegate> *horizontalLayoutDelegate;
@property (nonatomic, readonly) bool showsHorizontalScrollIndicator;

- (void).cxx_destruct;
- (double)_horizontalScrollIndicatorSpacing;
- (unsigned long long)_numberOfAlbums;
- (struct CGSize { double x1; double x2; })albumCellSize;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)horizontalLayoutDelegate;
- (id)init;
- (id)initWithHorizontalLayoutDelegate:(id)arg1 showsHorizontalScrollIndicator:(bool)arg2;
- (void)setHorizontalLayoutDelegate:(id)arg1;
- (bool)showsHorizontalScrollIndicator;

@end
