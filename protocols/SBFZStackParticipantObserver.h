
@protocol SBFZStackParticipantObserver <NSObject>

@optional

- (void)zStackParticipantWasInvalidated:(long long)arg1;
- (void)zStackParticipantWithIdentifier:(long long)arg1 settingsDidChange:(id <SBFZStackParticipantSettings>)arg2;
- (void)zStackParticipantWithIdentifier:(long long)arg1 wasAcquiredWithSettings:(id <SBFZStackParticipantSettings>)arg2;

@end
