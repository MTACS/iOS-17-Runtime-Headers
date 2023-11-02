
@interface BPSApplePayLocallyStoredValueManager : NSObject

+ (void)_attemptToMarkAllAppletsForDeletionWithCompletion:(id /* block */)arg1;
+ (void)_presentApplePayLocallyStoredValueWarningInController:(id)arg1 unableToConnect:(bool)arg2 legacyDevice:(bool)arg3 withCompletion:(id /* block */)arg4;
+ (void)presentApplePayLocallyStoredValueOfflineWarningIfNeededInController:(id)arg1 forPairedDevice:(id)arg2 withCompletion:(id /* block */)arg3;
+ (id)remoteLocallyStoredValuePassNames;

@end
