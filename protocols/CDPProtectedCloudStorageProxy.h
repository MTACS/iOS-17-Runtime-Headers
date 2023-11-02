
@protocol CDPProtectedCloudStorageProxy <NSObject>

@required

- (bool)isWalrusEnabledWithOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (struct _PCSIdentitySetData { }*)pcsIdentityCreateWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsIdentityMigrateToiCDPWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData { }*)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData { }*)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData { }*)arg1 options:(NSDictionary *)arg2 error:(id*)arg3;
- (struct _PCSIdentitySetData { }*)pcsIdentitySetupWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsRestoreLocalBackup:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsSynchronizeKeysWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)repairWalrusWithAccountIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 error:(id*)arg3;
- (bool)setWalrusEnabled:(bool)arg1 accountIdentifier:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id*)arg4;

@end
