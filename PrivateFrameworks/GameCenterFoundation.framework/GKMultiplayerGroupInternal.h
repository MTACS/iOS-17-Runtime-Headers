
@interface GKMultiplayerGroupInternal : GKInternalRepresentation {
    NSString * _groupID;
    long long  _numberOfAutomached;
    NSMutableArray * _participants;
    long long  _playedAt;
}

@property (nonatomic, retain) NSString *groupID;
@property (nonatomic) long long numberOfAutomached;
@property (nonatomic, retain) NSMutableArray *participants;
@property (nonatomic) long long playedAt;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)groupID;
- (long long)numberOfAutomached;
- (id)participants;
- (long long)playedAt;
- (void)setGroupID:(id)arg1;
- (void)setNumberOfAutomached:(long long)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPlayedAt:(long long)arg1;

@end
