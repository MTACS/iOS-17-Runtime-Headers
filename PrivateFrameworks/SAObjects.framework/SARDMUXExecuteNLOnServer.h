
@interface SARDMUXExecuteNLOnServer : SARDExecuteNLOnServer

@property (nonatomic) bool markedForHandOff;
@property (nonatomic) bool muxStateRollback;
@property (nonatomic, copy) NSString *selectedUserId;
@property (nonatomic, copy) NSString *selectedUserIdentityClassification;
@property (nonatomic, retain) SAConfidenceScores *voiceIDConfidenceScores;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)markedForHandOff;
- (bool)muxStateRollback;
- (bool)requiresResponse;
- (id)selectedUserId;
- (id)selectedUserIdentityClassification;
- (void)setMarkedForHandOff:(bool)arg1;
- (void)setMuxStateRollback:(bool)arg1;
- (void)setSelectedUserId:(id)arg1;
- (void)setSelectedUserIdentityClassification:(id)arg1;
- (void)setVoiceIDConfidenceScores:(id)arg1;
- (id)voiceIDConfidenceScores;

@end
