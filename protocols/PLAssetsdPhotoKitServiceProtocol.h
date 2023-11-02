
@protocol PLAssetsdPhotoKitServiceProtocol <PLAssetsdPhotoKitCommonServiceProtocol>

@required

- (void)getUUIDsForAssetObjectURIs:(void *)arg1 filterPredicate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)processUniversalSearchJITForAssetUUID:(void *)arg1 processingTypes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(void *)arg1 bundleID:(void *)arg2 processingTypes:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)resolveLocalIdentifiersForCloudIdentifiers:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
