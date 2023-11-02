
@interface GKTransportParticipant : GKInternalRepresentation {
    NSString * _playerID;
    NSString * _pseudonym;
}

@property (nonatomic, retain) NSString *playerID;
@property (nonatomic, retain) NSString *pseudonym;

+ (id)participantsFrom:(id)arg1 withKey:(id)arg2;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPlayerID:(id)arg1 pseudonym:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)playerID;
- (id)pseudonym;
- (id)serverRepresentation;
- (void)setPlayerID:(id)arg1;
- (void)setPseudonym:(id)arg1;

@end
