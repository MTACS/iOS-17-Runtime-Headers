
@interface UIUpdateItem : NSObject {
    int  _action;
    long long  _animation;
    UICollectionViewUpdateItem * _collectionViewUpdateItem;
    NSIndexPath * _indexPath;
    struct { 
        unsigned int isSectionOperation : 1; 
        unsigned int headerFooterOnly : 1; 
    }  _updateItemFlags;
}

@property (nonatomic, readonly) UICollectionViewUpdateItem *collectionViewUpdateItem;
@property (nonatomic, readonly) bool isDecomposedFromReload;

- (void).cxx_destruct;
- (id)_moveDestinationDescription;
- (id)collectionViewUpdateItem;
- (long long)compareIndexPaths:(id)arg1;
- (long long)compareIndexPathsForMoves:(id)arg1;
- (id)description;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (bool)isDecomposedFromReload;

@end
