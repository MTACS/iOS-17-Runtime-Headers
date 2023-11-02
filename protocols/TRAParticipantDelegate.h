
@protocol TRAParticipantDelegate <NSObject>

@required

- (void)didChangeSettingsForParticipant:(TRAParticipant *)arg1 context:(id <TRASettingsActuationContextProviding>)arg2;
- (void)updatePreferencesForParticipant:(TRAParticipant *)arg1 updater:(id <TRAPreferencesUpdating>)arg2;

@optional

- (void)appendDescriptionForParticipant:(TRAParticipant *)arg1 withBuilder:(BSDescriptionBuilder *)arg2 multilinePrefix:(NSString *)arg3;
- (void)participantWillInvalidate:(TRAParticipant *)arg1;
- (void)validateSettingsForParticipant:(TRAParticipant *)arg1 validator:(id <TRASettingsValidating>)arg2;

@end
