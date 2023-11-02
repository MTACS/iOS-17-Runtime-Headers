
@interface AVVoiceTriggerNotificationForwarder : NSObject <VoiceTriggerNotificationInterface> {
    <VoiceTriggerNotificationInterface> * _target;
}

@property (nonatomic) <VoiceTriggerNotificationInterface> *target;

- (void).cxx_destruct;
- (void)portStateChangedNotification:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)siriClientRecordStateChangedNotification:(bool)arg1 recordingCount:(unsigned long long)arg2;
- (void)speakerMuteStateChangedNotification:(bool)arg1;
- (void)speakerStateChangedNotification:(id)arg1;
- (id)target;
- (void)voiceTriggerNotification:(id)arg1;

@end
