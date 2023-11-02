
@protocol PLAssetsdSyncServiceProtocol <NSObject>

@required

- (void)finalizeOTARestoreRecreatingAlbums:(bool)arg1;
- (void)updateRestoredAssetWithUUID:(NSString *)arg1 paths:(NSArray *)arg2 fixAddedDate:(bool)arg3;

@end
