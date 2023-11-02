
@interface SFFluidCollectionViewUpdateItem : NSObject <NSCopying> {
    NSIndexPath * _indexPathAfterUpdate;
    NSIndexPath * _indexPathBeforeUpdate;
    long long  _updateAction;
}

@property (nonatomic, readonly) bool hasIndexPathChange;
@property (nonatomic, retain) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic, retain) NSIndexPath *indexPathBeforeUpdate;
@property (nonatomic, readonly) bool isSectionUpdate;
@property (nonatomic) long long updateAction;

+ (id)updateItemForDeleteFromIndexPath:(id)arg1;
+ (id)updateItemForInsertIntoIndexPath:(id)arg1;
+ (id)updateItemForMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
+ (id)updateItemForReloadAtIndexPath:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasIndexPathChange;
- (unsigned long long)hash;
- (id)indexPathAfterUpdate;
- (id)indexPathBeforeUpdate;
- (id)inverseItem;
- (bool)isEqual:(id)arg1;
- (bool)isSectionUpdate;
- (void)setIndexPathAfterUpdate:(id)arg1;
- (void)setIndexPathBeforeUpdate:(id)arg1;
- (void)setUpdateAction:(long long)arg1;
- (long long)updateAction;

@end
