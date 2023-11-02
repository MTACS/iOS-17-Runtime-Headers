
@interface NSBatchInsertRequest : NSPersistentStoreRequest {
    id  _entity;
    struct _insertRequestFlags { 
        unsigned int resultType : 2; 
        unsigned int entityIsName : 1; 
        unsigned int secureOperation : 1; 
        unsigned int _RESERVED : 28; 
    }  _flags;
    id /* block */  _insertDictionaryHandler;
    id /* block */  _insertManagedObjectHandler;
    NSArray * _objectsToInsert;
}

@property (copy) id /* block */ dictionaryHandler;
@property (readonly) NSEntityDescription *entity;
@property (readonly, copy) NSString *entityName;
@property (copy) id /* block */ managedObjectHandler;
@property (copy) NSArray *objectsToInsert;
@property unsigned long long resultType;

+ (id)batchInsertRequestWithEntityName:(id)arg1 dictionaryHandler:(id /* block */)arg2;
+ (id)batchInsertRequestWithEntityName:(id)arg1 managedObjectHandler:(id /* block */)arg2;
+ (id)batchInsertRequestWithEntityName:(id)arg1 objects:(id)arg2;
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 withPolicy:(id)arg3;

- (void)_resolveEntityWithContext:(id)arg1;
- (bool)_secureOperation;
- (void)_setSecureOperation:(bool)arg1;
- (void)dealloc;
- (id)description;
- (id /* block */)dictionaryHandler;
- (id)encodeForXPC;
- (id)entity;
- (id)entityName;
- (id)init;
- (id)initWithEntity:(id)arg1 dictionaryHandler:(id /* block */)arg2;
- (id)initWithEntity:(id)arg1 managedObjectHandler:(id /* block */)arg2;
- (id)initWithEntity:(id)arg1 objects:(id)arg2;
- (id)initWithEntityName:(id)arg1 dictionaryHandler:(id /* block */)arg2;
- (id)initWithEntityName:(id)arg1 managedObjectHandler:(id /* block */)arg2;
- (id)initWithEntityName:(id)arg1 objects:(id)arg2;
- (id /* block */)managedObjectHandler;
- (id)objectsToInsert;
- (unsigned long long)requestType;
- (unsigned long long)resultType;
- (void)setDictionaryHandler:(id /* block */)arg1;
- (void)setManagedObjectHandler:(id /* block */)arg1;
- (void)setObjectsToInsert:(id)arg1;
- (void)setResultType:(unsigned long long)arg1;

@end
