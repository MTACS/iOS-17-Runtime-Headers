
@protocol PHChangeRequest <NSObject>

@required

- (long long)accessScopeOptionsRequirement;
- (NSString *)clientName;
- (void)didSendChangeToServiceHandlerWithResult:(bool)arg1;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithUUID:(NSString *)arg1 objectID:(NSManagedObjectID *)arg2;
- (id)initWithXPCDict:(NSObject<OS_xpc_object> *)arg1 request:(PHPerformChangesRequest *)arg2 clientAuthorization:(id <PLClientAuthorization>)arg3;
- (bool)isClientEntitled;
- (NSString *)managedEntityName;
- (NSManagedObjectID *)objectID;
- (bool)prepareForPhotoLibraryCheck:(PHPhotoLibrary *)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;

@optional

- (void)changeFailedOnClientWithLibrary:(PLPhotoLibrary *)arg1 error:(NSError *)arg2;
- (void)changeFailedOnDaemonWithLibrary:(PLPhotoLibrary *)arg1 error:(NSError *)arg2;

@end
