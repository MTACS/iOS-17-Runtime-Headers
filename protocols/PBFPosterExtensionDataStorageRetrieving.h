
@protocol PBFPosterExtensionDataStorageRetrieving <NSObject>

@required

- (NSData *)attributeForPoster:(NSUUID *)arg1 roleId:(NSString *)arg2 attributeId:(NSString *)arg3 error:(out id*)arg4;
- (NSSet *)attributeIdentifiersForPoster:(NSUUID *)arg1 roleId:(NSString *)arg2 error:(out id*)arg3;
- (NSDictionary *)attributesForPoster:(NSUUID *)arg1 roleId:(NSString *)arg2 attributeIdentifiers:(NSSet *)arg3 error:(out id*)arg4;
- (bool)checkIfPosterUUIDs:(NSSet *)arg1 belongToRole:(NSString *)arg2 error:(out id*)arg3;
- (NSDictionary *)dataStoreMetadataWithError:(out id*)arg1;
- (NSString *)extensionIdentifierForPosterUUID:(NSUUID *)arg1 error:(out id*)arg2;
- (NSSet *)extensionIdentifiersForRole:(NSString *)arg1 error:(out id*)arg2;
- (NSSet *)posterUUIDsForExtensionIdentifier:(NSString *)arg1 role:(NSString *)arg2 error:(out id*)arg3;
- (NSDictionary *)roleDisplayNamesForIdentifiers:(NSSet *)arg1 error:(out id*)arg2;
- (NSSet *)roleIdentifiersWithError:(out id*)arg1;
- (NSUUID *)selectedPosterUUIDForRole:(NSString *)arg1 error:(out id*)arg2;
- (NSOrderedSet *)sortedPosterUUIDsForRole:(NSString *)arg1 error:(out id*)arg2;

@end
