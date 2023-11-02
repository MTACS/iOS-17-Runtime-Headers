
@protocol PHBatchFetchingArrayDataSource <NSObject>

@required

- (NSArray *)bfa_fetchObjectsForOIDs:(NSArray *)arg1 propertyHint:(unsigned long long)arg2 overrideResultsWithClass:(Class)arg3;
- (NSDictionary *)bfa_fetchUUIDsForRestrictedOIDs:(NSArray *)arg1;
- (NSArray *)bfa_fetchedObjectsForOIDs:(NSArray *)arg1 propertySetClass:(Class)arg2;
- (PHPhotoLibrary *)bfa_photoLibrary;
- (bool)bfa_supportsPrivacyRestrictionsForOIDs:(NSArray *)arg1;
- (<PHBatchFetchingArrayElement> *)bfa_tombstoneObjectForOID:(id)arg1 uuid:(NSString *)arg2 propertyHint:(unsigned long long)arg3 overrideResultsWithClass:(Class)arg4;

@end
