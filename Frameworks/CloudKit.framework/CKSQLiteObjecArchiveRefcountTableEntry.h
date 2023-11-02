
@interface CKSQLiteObjecArchiveRefcountTableEntry : CKSQLiteTableEntry {
    NSNumber * _objectID;
    NSNumber * _refCount;
}

@property (nonatomic, retain) NSNumber *objectID;
@property (nonatomic, retain) NSNumber *refCount;

- (void).cxx_destruct;
- (id)objectID;
- (id)refCount;
- (void)setObjectID:(id)arg1;
- (void)setRefCount:(id)arg1;

@end
