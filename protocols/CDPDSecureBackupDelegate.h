
@protocol CDPDSecureBackupDelegate

@required

- (NSString *)circlePeerIDForSecureBackupController:(id <CDPDSecureBackupControl>)arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)promptForLocalSecretWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CDPLocalSecret *, NSError *, void*
- (bool)synchronizeCircleViewsForSecureBackupContext:(CDPDSecureBackupContext *)arg1;

@end
