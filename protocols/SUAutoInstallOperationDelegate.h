
@protocol SUAutoInstallOperationDelegate <NSObject>

@required

- (void)autoInstallOperationDidConsent:(SUAutoInstallOperation *)arg1;
- (void)autoInstallOperationIsReadyToInstall:(void *)arg1 withResponse:(void *)arg2; // needs 2 arg types, found 8: SUAutoInstallOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)autoInstallOperationPasscodePolicyDidChange:(SUAutoInstallOperation *)arg1 passcodePolicyType:(unsigned long long)arg2;
- (void)autoInstallOperationWasCancelled:(SUAutoInstallOperation *)arg1;

@optional

- (void)autoInstallOperationDidExpire:(SUAutoInstallOperation *)arg1;
- (void)autoInstallOperationDidExpire:(SUAutoInstallOperation *)arg1 withError:(NSError *)arg2;

@end
