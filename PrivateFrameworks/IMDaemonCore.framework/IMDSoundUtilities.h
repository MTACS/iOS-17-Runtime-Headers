
@interface IMDSoundUtilities : NSObject

+ (unsigned int)_installSystemSound:(id)arg1;
+ (bool)_isAcknowledgmentMessage:(id)arg1;
+ (bool)_isAssociatedMessage:(id)arg1;
+ (bool)_isAutoPlay:(id)arg1;
+ (bool)_isSMSMessage:(id)arg1;
+ (bool)_isSuppressedForGUID:(id)arg1;
+ (void)_playAcknowledgmentSentSound;
+ (void)_playSMSSound;
+ (void)_playSoundType:(long long)arg1;
+ (long long)_smsSoundsToPlay;
+ (long long)_soundTypeForMessage:(id)arg1;
+ (void)_stopSuppressingForGUID:(id)arg1;
+ (bool)_wasDowngraded:(id)arg1;
+ (void)playMessageSentSoundIfNeeded:(id)arg1;

@end
