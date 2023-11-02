
@interface GKInviteInitiateResponse : GKInternalRepresentation {
    NSNumber * _approachUsed;
    NSURL * _cloudKitShareURL;
    NSArray * _gameParticipantsInfo;
    NSDictionary * _invitedUserIDs;
    NSArray * _lobbyParticipantsInfo;
    NSDictionary * _playerTokenMap;
    NSString * _selfPseudonym;
    NSData * _selfPushToken;
    NSString * _sessionID;
    NSData * _sessionToken;
    NSNumber * _transportVersionToUse;
}

@property (nonatomic, retain) NSNumber *approachUsed;
@property (nonatomic, retain) NSURL *cloudKitShareURL;
@property (nonatomic, retain) NSArray *gameParticipantsInfo;
@property (nonatomic, retain) NSDictionary *invitedUserIDs;
@property (nonatomic, retain) NSArray *lobbyParticipantsInfo;
@property (nonatomic, retain) NSDictionary *playerTokenMap;
@property (nonatomic, retain) NSString *selfPseudonym;
@property (nonatomic, retain) NSData *selfPushToken;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) NSData *sessionToken;
@property (nonatomic, retain) NSNumber *transportVersionToUse;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)approachUsed;
- (id)cloudKitShareURL;
- (id)gameParticipantsInfo;
- (id)invitedUserIDs;
- (id)lobbyParticipantsInfo;
- (id)playerTokenMap;
- (id)selfPseudonym;
- (id)selfPushToken;
- (id)sessionID;
- (id)sessionToken;
- (void)setApproachUsed:(id)arg1;
- (void)setCloudKitShareURL:(id)arg1;
- (void)setGameParticipantsInfo:(id)arg1;
- (void)setInvitedUserIDs:(id)arg1;
- (void)setLobbyParticipantsInfo:(id)arg1;
- (void)setPlayerTokenMap:(id)arg1;
- (void)setSelfPseudonym:(id)arg1;
- (void)setSelfPushToken:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setTransportVersionToUse:(id)arg1;
- (id)transportVersionToUse;

@end
