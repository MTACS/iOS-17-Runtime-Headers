
@protocol BCCloudAssetAnnotationManager <NSObject>

@required

- (void)assetWithID:(void *)arg1 updatedAnnotations:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (NSURL *)fileURLForCachingCKAssetWithAssetID:(NSString *)arg1;
- (void)getAnnotationChangesSince:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: BCMutableCloudSyncVersions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, bool, void*

@end
