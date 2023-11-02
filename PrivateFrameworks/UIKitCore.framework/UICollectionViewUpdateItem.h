
@interface UICollectionViewUpdateItem : NSObject <NSCopying> {
    struct _UICollectionUpdateIndexPair { 
        long long section; 
        long long item; 
    }  _finalIndexPair;
    NSIndexPath * _finalIndexPath;
    NSUUID * _identifier;
    struct _UICollectionUpdateIndexPair { 
        long long section; 
        long long item; 
    }  _indexPairForAction;
    struct _UICollectionUpdateIndexPair { 
        long long section; 
        long long item; 
    }  _initialIndexPair;
    NSIndexPath * _initialIndexPath;
    long long  _updateAction;
    struct { 
        unsigned int isAppendingSectionInsert : 1; 
        unsigned int shouldReconfigure : 1; 
    }  _updateItemFlags;
}

@property (nonatomic, readonly) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic, readonly) NSIndexPath *indexPathBeforeUpdate;
@property (nonatomic, readonly) long long updateAction;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)compareIndexPaths:(id)arg1;
- (long long)compareIndexPathsForMoves:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)indexPathAfterUpdate;
- (id)indexPathBeforeUpdate;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)updateAction;

@end
