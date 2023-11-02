
@interface GKPlayerActivityRelationships : GKInternalRepresentation {
    NSArray * _achievements;
    NSArray * _games;
    NSArray * _leaderboards;
    NSArray * _players;
}

@property (nonatomic, retain) NSArray *achievements;
@property (nonatomic, retain) NSArray *games;
@property (nonatomic, retain) NSArray *leaderboards;
@property (nonatomic, retain) NSArray *players;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)achievements;
- (id)description;
- (id)games;
- (id)initWithDictionary:(id)arg1;
- (id)leaderboards;
- (id)players;
- (void)setAchievements:(id)arg1;
- (void)setGames:(id)arg1;
- (void)setLeaderboards:(id)arg1;
- (void)setPlayers:(id)arg1;

@end
