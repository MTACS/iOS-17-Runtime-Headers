
@protocol VoiceTriggerNotificationInterface

@required

- (void)portStateChangedNotification:(NSDictionary *)arg1;
- (void)siriClientRecordStateChangedNotification:(bool)arg1 recordingCount:(unsigned long long)arg2;
- (void)speakerMuteStateChangedNotification:(bool)arg1;
- (void)speakerStateChangedNotification:(NSDictionary *)arg1;
- (void)voiceTriggerNotification:(NSDictionary *)arg1;

@end
