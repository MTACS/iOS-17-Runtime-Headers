
@interface _ICQMegaBackupManager : NSObject

- (id)_extendExpirationURLForAccount:(id)arg1;
- (id)_quotaBackupCheckURLForAccount:(id)arg1;
- (id)_updateStatusURLForAccount:(id)arg1;
- (void)extendExpirationForAccount:(id)arg1 deviceBackupUUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)extendExpirationForAccount:(id)arg1 deviceBackupUUID:(id)arg2 requestedExpirationDate:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)requestMegaBackupForAccount:(id)arg1 deviceBackupUUID:(id)arg2 deviceTotalUsedSpaceInBytes:(id)arg3 entryMethod:(long long)arg4 deepLinkURL:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
- (void)requestMegaBackupForAccount:(id)arg1 deviceBackupUUID:(id)arg2 deviceTotalUsedSpaceInBytes:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)updateMegaBackupStatusForAccount:(id)arg1 deviceBackupUUID:(id)arg2 status:(long long)arg3 queue:(id)arg4 completion:(id /* block */)arg5;

@end
