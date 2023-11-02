
@interface GKPlayerActivityRelationshipLeaderboard : GKPlayerActivityRelationshipBase {
    GKLeaderboardInternal * _leaderboardInternal;
    long long  _leaderboardType;
    NSArray * _scores;
}

@property (nonatomic, retain) GKLeaderboardInternal *leaderboardInternal;
@property (nonatomic) long long leaderboardType;
@property (nonatomic, retain) NSArray *scores;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)leaderboardInternal;
- (long long)leaderboardType;
- (id)scores;
- (void)setLeaderboardInternal:(id)arg1;
- (void)setLeaderboardType:(long long)arg1;
- (void)setScores:(id)arg1;

@end
