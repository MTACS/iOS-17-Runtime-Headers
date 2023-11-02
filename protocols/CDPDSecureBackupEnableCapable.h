
@protocol CDPDSecureBackupEnableCapable <NSObject>

@required

- (void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPDSecureBackupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)enableSecureBackupWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPDSecureBackupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)enableSecureBackupWithRecoveryKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPDSecureBackupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
