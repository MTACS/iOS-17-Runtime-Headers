
@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest {
    NSArray * _playerInternals;
}

@property (nonatomic, copy) NSArray *playerInternals;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)playerInternals;
- (void)setPlayerInternals:(id)arg1;

@end
