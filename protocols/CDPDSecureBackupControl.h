
@protocol CDPDSecureBackupControl <NSObject>

@required

- (void)backupRecordsArePresentWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)checkForExistingRecord:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDevice *, NSError *, void*
- (void)checkForExistingRecordMatchingPredicate:(void *)arg1 forceFetch:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSPredicate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDevice *, NSError *, void*
- (void)checkForExistingRecordWithPeerId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDevice *, NSError *, void*
- (void)clearAccountInfoCache;
- (CDPContext *)context;
- (<CDPDSecureBackupDelegate> *)delegate;
- (bool)fakeNearlyDepletedRecords;
- (void)getBackupRecordDevicesWithOptionForceFetch:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, NSError *, void*
- (id)init;
- (id)initWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 delegate:(id <CDPDSecureBackupDelegate>)arg3;
- (void)isEligibleForCDPWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performEscrowRecoveryWithRecoveryContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPDSecureBackupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDRemoteSecretValidationResult *, NSError *, void*
- (void)recoverSecureBackupWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPDSecureBackupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPDRemoteSecretValidationResult *, NSError *, void*
- (<CDPDSecureBackupProxy> *)secureBackupProxy;
- (void)setFakeNearlyDepletedRecords:(bool)arg1;
- (void)setSecureBackupProxy:(id <CDPDSecureBackupProxy>)arg1;
- (void)synchronizeKeyValueStoreWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (<CDPStateUIProviderInternal> *)uiProvider;

@optional

- (bool)supportsRecoveryKeyWithError:(id*)arg1;

@end
