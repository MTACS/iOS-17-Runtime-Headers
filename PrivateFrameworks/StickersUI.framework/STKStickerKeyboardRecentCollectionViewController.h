
@interface STKStickerKeyboardRecentCollectionViewController : StickersUI.StickerCollectionViewController {
    void blankCellIndexPaths;
    void blankCellUUIDs;
    void indexesInColumnOrder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  moreButtonIdentifier;
    void previousContainerSize;
}

- (void).cxx_destruct;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
