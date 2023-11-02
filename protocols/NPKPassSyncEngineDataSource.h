
@protocol NPKPassSyncEngineDataSource <NSObject>

@required

- (NSData *)passSyncEngine:(NPKPassSyncEngine *)arg1 dataForPassWithUniqueID:(NSString *)arg2;
- (NSData *)passSyncEngine:(NPKPassSyncEngine *)arg1 partialDataForPassWithUniqueID:(NSString *)arg2 baseManifest:(NSDictionary *)arg3 outRemoteAssets:(id*)arg4;
- (NPKPassLibrarySyncState *)passSyncEngineNeedsUpdatedPassLibraryState:(NPKPassSyncEngine *)arg1;

@end
