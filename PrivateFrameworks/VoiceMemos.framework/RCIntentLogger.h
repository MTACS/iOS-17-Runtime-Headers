
@interface RCIntentLogger : NSObject

+ (void)_donateInteraction:(id)arg1;
+ (void)deleteInteractionsWithUUID:(id)arg1;
+ (void)deleteInteractionsWithUUIDs:(id)arg1;
+ (void)donatePlaybackVoiceMemoIntentWithUUID:(id)arg1;
+ (void)donateRecordVoiceMemoIntentWithUUID:(id)arg1;
+ (id)interactionForPlaybackVoiceMemo;
+ (id)interactionForRecordVoiceMemo;

@end
