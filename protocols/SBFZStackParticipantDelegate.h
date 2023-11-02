
@protocol SBFZStackParticipantDelegate <NSObject>

@required

- (void)zStackParticipant:(SBFZStackParticipant *)arg1 updatePreferences:(SBFZStackParticipantPreferences *)arg2;
- (void)zStackParticipantDidChange:(SBFZStackParticipant *)arg1;

@optional

- (void)zStackParticipantVerifyInternalConsistency:(SBFZStackParticipant *)arg1;

@end
