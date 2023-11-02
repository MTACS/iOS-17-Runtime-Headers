
@protocol CSAttSiriServiceDelegate <NSObject>

@optional

- (void)attSiriAttendingFailed;
- (void)attSiriAttendingTimeoutTriggered;
- (void)attSiriDidDetectAttendingTrigger:(CSAttSiriAttendingTriggerEventInfo *)arg1;
- (void)attSiriDidDetectContinuousConversation;
- (void)attSiriDidStartAttending;
- (void)attSiriDidStartAttending:(bool)arg1;
- (void)attSiriDidStartAttending:(bool)arg1 useLegacyModel:(bool)arg2;

@end
