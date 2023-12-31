
@protocol HDNanoSyncStoreDelegate <NSObject>

@required

- (bool)isMaster;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 deviceNameDidChange:(NSString *)arg2;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 remoteSystemBuildVersionDidChange:(NSString *)arg2;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 restoreStateDidChange:(long long)arg2;

@end
