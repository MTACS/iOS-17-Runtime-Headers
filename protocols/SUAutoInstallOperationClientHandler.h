
@protocol SUAutoInstallOperationClientHandler <NSObject>

@required

- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationDidExpireWithError:(NSError *)arg1;
- (void)_noteAutoInstallOperationIsReadyToInstall:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)_noteAutoInstallOperationPasscodePolicyChanged:(unsigned long long)arg1;
- (void)_noteAutoInstallOperationWasCancelled;
- (NSString *)uniqueIdentifier;

@end
