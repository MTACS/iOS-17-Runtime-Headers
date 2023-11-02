
@interface GKUpdateInviteInfo : GKInternalRepresentation {
    NSSet * _gameParticipants;
    NSSet * _lobbyParticipants;
    NSString * _matchID;
    NSDictionary * _playerTokenMap;
    NSString * _sessionID;
    NSData * _sessionToken;
    NSNumber * _transportVersionToUse;
}

@property (nonatomic, retain) NSSet *gameParticipants;
@property (nonatomic, retain) NSSet *lobbyParticipants;
@property (nonatomic, retain) NSString *matchID;
@property (nonatomic, retain) NSDictionary *playerTokenMap;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) NSData *sessionToken;
@property (nonatomic, retain) NSNumber *transportVersionToUse;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)gameParticipants;
- (id)lobbyParticipants;
- (id)matchID;
- (void)mergeWithUpdate:(id)arg1;
- (id)playerTokenMap;
- (id)sessionID;
- (id)sessionToken;
- (void)setGameParticipants:(id)arg1;
- (void)setLobbyParticipants:(id)arg1;
- (void)setMatchID:(id)arg1;
- (void)setPlayerTokenMap:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setTransportVersionToUse:(id)arg1;
- (id)transportVersionToUse;

@end
