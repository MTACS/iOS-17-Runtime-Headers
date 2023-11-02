
@interface NSSaveChangesRequest : NSPersistentStoreRequest {
    NSSet * _deletedObjects;
    unsigned long long  _flags;
    NSSet * _insertedObjects;
    NSMutableArray * _mutatedObjectIDsNotifications;
    NSSet * _optimisticallyLockedObjects;
    NSSet * _updatedObjects;
}

@property (readonly) NSSet *deletedObjects;
@property (readonly) NSSet *insertedObjects;
@property (readonly) NSSet *lockedObjects;
@property (readonly) NSSet *updatedObjects;

+ (void)initialize;

- (bool)_secureOperation;
- (void)_setSecureOperation:(bool)arg1;
- (void)dealloc;
- (id)deletedObjects;
- (id)description;
- (id)init;
- (id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4;
- (id)insertedObjects;
- (id)lockedObjects;
- (unsigned long long)requestType;
- (id)updatedObjects;

@end
