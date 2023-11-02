
@interface GKScoreChallengeInternal : GKChallengeInternal {
    GKLeaderboardInternal * _leaderboard;
    GKScoreInternal * _score;
}

@property (nonatomic, retain) GKLeaderboardInternal *leaderboard;
@property (nonatomic, copy) GKScoreInternal *score;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)leaderboard;
- (id)score;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (void)setScore:(id)arg1;
- (id)titleText;
- (unsigned long long)type;

@end
