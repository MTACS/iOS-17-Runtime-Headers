
@protocol CDPDBackupRecoveryResultsParser <NSObject>

@required

- (NSDictionary *)resultsDictionaryFromRecoveryResult:(CDPDRemoteSecretValidationResult *)arg1 error:(id*)arg2;

@end
