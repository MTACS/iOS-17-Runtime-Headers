
@interface VUICollectionChangeSet : NSObject {
    VUICollectionChange * _deleteChange;
    VUICollectionChange * _insertChange;
    NSArray * _moveChanges;
    NSArray * _updateChanges;
}

@property (nonatomic, retain) VUICollectionChange *deleteChange;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, retain) VUICollectionChange *insertChange;
@property (nonatomic, copy) NSArray *moveChanges;
@property (nonatomic, copy) NSArray *updateChanges;

- (void).cxx_destruct;
- (id)_changesKinds;
- (bool)containsOnlyChangeKind:(unsigned long long)arg1;
- (id)deleteChange;
- (id)description;
- (bool)hasChanges;
- (id)insertChange;
- (id)moveChanges;
- (void)setDeleteChange:(id)arg1;
- (void)setInsertChange:(id)arg1;
- (void)setMoveChanges:(id)arg1;
- (void)setUpdateChanges:(id)arg1;
- (id)updateChanges;

@end
