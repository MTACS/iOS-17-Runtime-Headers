
@interface VUICollectionChange : NSObject {
    unsigned long long  _changeKind;
    NSIndexSet * _destinationIndexes;
    NSIndexSet * _sourceIndexes;
    VUICollectionChangeSet * _updateChangeSet;
}

@property (nonatomic, readonly) unsigned long long changeKind;
@property (nonatomic, readonly, copy) NSIndexSet *destinationIndexes;
@property (nonatomic, readonly, copy) NSIndexSet *sourceIndexes;
@property (nonatomic, retain) VUICollectionChangeSet *updateChangeSet;

- (void).cxx_destruct;
- (unsigned long long)changeKind;
- (id)description;
- (id)destinationIndexes;
- (id)init;
- (id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3;
- (void)setUpdateChangeSet:(id)arg1;
- (id)sourceIndexes;
- (id)updateChangeSet;

@end
