
@interface GKTTRMultiplayerParticipant : GKInternalRepresentation {
    NSString * _playerID;
    NSData * _pushToken;
}

@property (nonatomic, retain) NSString *playerID;
@property (nonatomic, retain) NSData *pushToken;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPlayerID:(id)arg1 pushToken:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)playerID;
- (id)pushToken;
- (id)serverRepresentation;
- (void)setPlayerID:(id)arg1;
- (void)setPushToken:(id)arg1;

@end
