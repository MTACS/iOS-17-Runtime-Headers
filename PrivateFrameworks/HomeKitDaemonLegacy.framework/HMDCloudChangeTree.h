
@interface HMDCloudChangeTree : HMFObject {
    NSMapTable * _branchMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _objectMap;
    NSMutableArray * _objects;
    NSMapTable * _recordMap;
    NSSet * _validRootUUIDs;
}

@property (nonatomic, readonly) NSArray *allTransactionStoreRowIDs;
@property (nonatomic, retain) NSMapTable *branchMap;
@property (nonatomic, readonly) NSMutableArray *cloudChanges;
@property (nonatomic, readonly) bool hasValidChanges;
@property (nonatomic, readonly) NSMutableArray *invalidCloudChanges;
@property (nonatomic, retain) NSMapTable *objectMap;
@property (nonatomic, retain) NSMutableArray *objects;
@property (nonatomic, readonly) NSArray *objectsWithPotentialChanges;
@property (nonatomic, readonly) NSArray *orphans;
@property (nonatomic, retain) NSMapTable *recordMap;
@property (nonatomic, retain) NSSet *validRootUUIDs;

+ (id)logCategory;
+ (bool)modelTypeCanBeOrphaned:(id)arg1;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_addNode:(id)arg1;
- (id)_findNodeWithRecordMapping:(id)arg1;
- (id)_objectForRecordName:(id)arg1;
- (id)_objectForUUID:(id)arg1;
- (void)_updateNode:(id)arg1 oldRecordName:(id)arg2;
- (id)allTransactionStoreRowIDs;
- (id)branchMap;
- (id)cloudChanges;
- (id)description;
- (void)findAndDeletedChildren;
- (void)findAndMarkOrphanedBranches;
- (bool)hasValidChanges;
- (id)init;
- (id)initWithRootUUIDs:(id)arg1;
- (id)invalidCloudChanges;
- (void)logChangeTreeWithIndent:(id)arg1;
- (id)objectForRecordName:(id)arg1;
- (id)objectForUUID:(id)arg1;
- (id)objectMap;
- (id)objects;
- (id)objectsWithPotentialChanges;
- (id)orphans;
- (id)recordMap;
- (id)recordMapWithFilter:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)setBranchMap:(id)arg1;
- (void)setObjectMap:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setRecordMap:(id)arg1;
- (void)setValidRootUUIDs:(id)arg1;
- (id)shortDescription;
- (void)updateChange:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)updateNode:(id)arg1 withCloudRecord:(id)arg2;
- (void)updateRecordMapping:(id)arg1;
- (id)validRootUUIDs;

@end
