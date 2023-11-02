
@interface NPKAudioPlayer : NSObject

+ (void)_playSoundsWithFallbackHapticIfNecessaryForSoundIdentifier:(unsigned int)arg1;
+ (void)_playSoundsWithIdentifier:(unsigned int)arg1;
+ (void)playAccessScanCompleteHaptic;
+ (void)playIdentityReaderConnectionCompleteHaptic;
+ (void)playIdentityReaderConnectionStartHaptic;
+ (void)playInAppPaymentFailureHaptic;
+ (void)playInAppPaymentSuccessHaptic;
+ (void)playProvisioningFailureHaptic;
+ (void)playProvisioningSuccessHaptic;
+ (void)playReadyToReorderHaptic;
+ (void)playSessionStartFailureHaptic;
+ (void)playSessionTimeoutHaptic;
+ (void)playTerminalRequestedAuthenticationHaptic;
+ (void)playTransactionAuthenticationHaptic;
+ (void)playTransactionFailureHaptic;
+ (void)playTransactionSuccessHaptic;
+ (void)playWarsawHaptic;

@end
