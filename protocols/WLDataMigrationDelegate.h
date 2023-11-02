
@protocol WLDataMigrationDelegate <NSObject>

@required

- (void)daemon:(id <WLDataMigratorProtocol>)arg1 didChangeState:(long long)arg2 withContext:(WLContext *)arg3;
- (void)daemon:(id <WLDataMigratorProtocol>)arg1 didCreateCode:(NSString *)arg2;
- (void)daemon:(id <WLDataMigratorProtocol>)arg1 didImportWithContext:(WLContext *)arg2;
- (void)daemon:(id <WLDataMigratorProtocol>)arg1 didReceiveClient:(NSString *)arg2 brand:(NSString *)arg3 model:(NSString *)arg4 name:(NSString *)arg5;
- (void)daemon:(id <WLDataMigratorProtocol>)arg1 didUpdateProgress:(float)arg2 remainingTime:(unsigned long long)arg3 completedOperationCount:(unsigned long long)arg4 totalOperationCount:(unsigned long long)arg5;
- (void)daemonDidAuthenticateClient:(id <WLDataMigratorProtocol>)arg1;
- (void)daemonDidRejectClient:(id <WLDataMigratorProtocol>)arg1;
- (void)daemonWillImport:(id <WLDataMigratorProtocol>)arg1;
- (void)dataMigrator:(id <WLDataMigratorProtocol>)arg1 didFailWithError:(NSError *)arg2;
- (void)dataMigrator:(id <WLDataMigratorProtocol>)arg1 didUpdateMigrationState:(unsigned long long)arg2;
- (void)dataMigrator:(id <WLDataMigratorProtocol>)arg1 didUpdateProgressPercentage:(float)arg2;
- (void)dataMigrator:(id <WLDataMigratorProtocol>)arg1 didUpdateRemainingDownloadTime:(double)arg2;
- (void)dataMigratorDidBecomeRestartable:(id <WLDataMigratorProtocol>)arg1;
- (void)dataMigratorDidFinish:(id <WLDataMigratorProtocol>)arg1 withImportErrors:(bool)arg2 context:(WLContext *)arg3;
- (void)dataMigratorDidGetInterrupted;

@end
