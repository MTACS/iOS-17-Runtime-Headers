
@protocol CKFetchShareMetadataOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleShareMetadataFetchForURL:(NSURL *)arg1 shareMetadata:(CKShareMetadata *)arg2 error:(NSError *)arg3;

@end
