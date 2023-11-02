
@interface MapsSync.MapsSyncObject : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _createTime;
    void _editBlocks;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _identifier;
    void _managedObjectId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _modificationTime;
    void _propertyLock;
    void _store;
}

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isStored;
@property (nonatomic, retain) NSManagedObjectID *managedId;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, readonly) _TtC8MapsSync13MapsSyncStore *store;

+ (id)findDuplicatesWithContext:(id)arg1;
+ (Class)managedClass;
+ (id)mergeWithDuplicates:(id)arg1;
+ (id)strippedMapItemWith:(id)arg1;

- (void).cxx_destruct;
- (void)addEdit:(id)arg1 :(id /* block */)arg2;
- (id)createTime;
- (void)flushChanges;
- (id)getManagedObjectOnContextWithLock:(id)arg1 context:(id)arg2;
- (bool)hasChanges;
- (long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStored;
- (id)managedId;
- (id)modificationTime;
- (id)onDeleteWithManagedObject:(id)arg1 context:(id)arg2;
- (void)performEditsOnContextWithLock:(id)arg1 managedObject:(id)arg2;
- (void)setCreateTime:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setManagedId:(id)arg1;
- (void)setModificationTime:(id)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (id)store;
- (void)withPropertyLock:(id /* block */)arg1;

@end
