
@protocol BCCloudAssetDetailManager <NSObject>

@required

- (void)assetDetailForAssetID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableAssetDetail *, NSError *, void*
- (void)assetDetailsForAssetIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BCMutableCloudSyncVersions *, NSError *, void*
- (void)currentAssetDetailCloudSyncVersions:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableCloudSyncVersions *, void*
- (void)deleteAssetDetailForAssetID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchAssetDetailsForUnsyncedTastes:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchAssetDetailsIncludingDeleted:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BCMutableCloudSyncVersions *, NSError *, void*
- (void)fetchFinishedAssetCountByYearWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchFinishedDatesByAssetIDForYear:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getAssetDetailChangesSince:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: BCMutableCloudSyncVersions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, bool, void*
- (void)resolvedAssetDetailForAssetID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableAssetDetail *, NSError *, void*
- (void)setAssetDetail:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: BCMutableAssetDetail *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)setAssetDetails:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*

@end
