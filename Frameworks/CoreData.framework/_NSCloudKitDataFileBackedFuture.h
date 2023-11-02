
@interface _NSCloudKitDataFileBackedFuture : _NSDataFileBackedFuture

- (void)_copyToInterimLocation;
- (bool)_isCloudKitSupportOriginated;
- (void)_moveToPermanentLocation;
- (id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 originalFileURL:(id)arg3;

@end
