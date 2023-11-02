
@interface MapsSync.MapsSyncBaseItem : MapsSync.MapsSyncObjectWrapper {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _createTime;
    void _editBlocks;
    void _editBlocksLock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _identifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _modificationTime;
    void _positionIndex;
    void _readContext;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _saveObjectSignpost;
}

@property (nonatomic, copy) NSDate *_createTime;
@property (nonatomic, copy) NSUUID *_identifier;
@property (nonatomic, copy) NSDate *_modificationTime;
@property (nonatomic) long long _positionIndex;
@property (nonatomic, retain) NSManagedObjectContext *_readContext;
@property (nonatomic, readonly) NSDate *createTime;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDate *modificationTime;
@property (nonatomic, readonly) long long positionIndex;

+ (id)_callbackQueue;
+ (id)_queue;

- (void).cxx_destruct;
- (id)_createTime;
- (id)_identifier;
- (id)_modificationTime;
- (long long)_positionIndex;
- (id)_readContext;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)callCleanInObjc:(id)arg1;
- (void)commitEditsWithCompletion:(id /* block */)arg1;
- (id)copyWithZone:(void*)arg1;
- (id)createTime;
- (void)deleteWithCompletion:(id /* block */)arg1;
- (id)description;
- (void)executeOnFirstSave:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isDuplicateOfOther:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (id)modificationTime;
- (id)mutableObject:(id)arg1;
- (Class)mutableObjectClass;
- (id)performEditsWithoutSavingWithCompletion:(id /* block */)arg1;
- (void)persistObject:(id)arg1 saveContext:(bool)arg2 completion:(id /* block */)arg3;
- (long long)positionIndex;
- (void)setPropertiesWithObject:(id)arg1;
- (void)setReadContextWithContext:(id)arg1;
- (void)set_createTime:(id)arg1;
- (void)set_identifier:(id)arg1;
- (void)set_modificationTime:(id)arg1;
- (void)set_positionIndex:(long long)arg1;
- (void)set_readContext:(id)arg1;
- (id)validate;

@end
