
@interface GKLeaderboardScore : NSObject {
    unsigned long long  _context;
    NSString * _leaderboardID;
    GKPlayer * _player;
    long long  _value;
}

@property (nonatomic) unsigned long long context;
@property (nonatomic, retain) NSString *leaderboardID;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) long long value;

+ (id)convertToGKScore:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)context;
- (id)leaderboardID;
- (id)player;
- (void)setContext:(unsigned long long)arg1;
- (void)setLeaderboardID:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;

@end
