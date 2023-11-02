
@interface PHObjectDeleteRequest : PHChangeRequest <PHDeleteChangeRequest> {
    NSString * _clientBundleID;
    bool  _clientEntitled;
    NSString * _clientName;
    NSManagedObjectID * _objectID;
    NSString * _uuid;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (nonatomic, readonly) NSString *clientBundleID;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (readonly) Class superclass;

+ (id)_deleteRequestsForObjects:(id)arg1;
+ (id)deleteRequestForObject:(id)arg1;
+ (id)deleteRequestsForObjects:(id)arg1 ofType:(Class)arg2 forSelector:(SEL)arg3;

- (void).cxx_destruct;
- (id)clientBundleID;
- (id)clientName;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithUUID:(id)arg1 request:(id)arg2 objectID:(id)arg3;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (bool)isClientEntitled;
- (id)managedEntityName;
- (id)objectID;
- (id)uuid;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
