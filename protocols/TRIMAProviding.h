
@protocol TRIMAProviding

@required

- (<TRIAutoAsset> *)createAutoAssetWithId:(TRIFullMAAssetId *)arg1 decryptionKey:(NSData *)arg2 error:(id*)arg3;
- (TRICancelableMAOperation *)downloadAssets:(void *)arg1 attribution:(void *)arg2 aggregateProgress:(void *)arg3 group:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: NSDictionary *, <TRITaskAttributing> *, TRIAggregateFetchRecordsProgress *, NSObject<OS_dispatch_group> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, NSDate *, NSError *, void*
- (void)eliminateAllForSelector:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: MAAutoAssetSelector *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAAutoAssetSelector *, NSError *, void*
- (void)eliminatePromotedNeverLockedForSelector:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: MAAutoAssetSelector *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAAutoAssetSelector *, NSError *, void*
- (NSError *)endAllPreviousLocksOfReasonSync:(NSString *)arg1 forClientName:(NSString *)arg2 forAssetSelector:(MAAutoAssetSelector *)arg3;
- (NSError *)endAllPreviousLocksOfSelectorSync:(MAAutoAssetSelector *)arg1 forClientName:(NSString *)arg2;
- (NSDictionary *)installedAssetsMatchingFullAssetIds:(NSSet *)arg1;

@end
