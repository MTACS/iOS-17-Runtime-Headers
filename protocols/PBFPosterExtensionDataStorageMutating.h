
@protocol PBFPosterExtensionDataStorageMutating <NSObject>

@required

- (bool)addPosterUUID:(NSUUID *)arg1 provider:(NSString *)arg2 error:(out id*)arg3;
- (bool)addRole:(NSString *)arg1 displayName:(NSString *)arg2 error:(out id*)arg3;
- (bool)assignPosterUUID:(NSUUID *)arg1 toRole:(NSString *)arg2 error:(out id*)arg3;
- (bool)markPosterUUIDAsSelected:(NSUUID *)arg1 roleId:(NSString *)arg2 error:(out id*)arg3;
- (bool)mutateAttributeForPoster:(NSUUID *)arg1 roleId:(NSString *)arg2 attributeId:(NSString *)arg3 attributePayload:(NSData *)arg4 error:(out id*)arg5;
- (bool)mutateDataStoreMetadataForKey:(NSString *)arg1 value:(NSString *)arg2 error:(out id*)arg3;
- (bool)mutateSortOrder:(NSOrderedSet *)arg1 roleId:(NSString *)arg2 error:(out id*)arg3;
- (bool)removePosterUUID:(NSUUID *)arg1 error:(out id*)arg2;
- (bool)removeRole:(NSString *)arg1 error:(out id*)arg2;
- (bool)unassignPosterUUID:(NSUUID *)arg1 fromRole:(NSString *)arg2 error:(out id*)arg3;

@end
