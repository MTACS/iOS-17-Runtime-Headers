
@interface GKLeaderboardEntryInternal : GKInternalRepresentation {
    NSString * _baseLeaderboardID;
    unsigned long long  _context;
    NSDate * _date;
    NSString * _formattedScore;
    GKPlayerInternal * _player;
    long long  _rank;
    long long  _score;
    long long  _state;
}

@property (nonatomic, copy) NSString *baseLeaderboardID;
@property (nonatomic) unsigned long long context;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *formattedScore;
@property (nonatomic, retain) GKPlayerInternal *player;
@property (nonatomic) long long rank;
@property (nonatomic) long long score;
@property (nonatomic) long long state;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)baseLeaderboardID;
- (unsigned long long)context;
- (id)date;
- (id)formattedScore;
- (id)player;
- (long long)rank;
- (long long)score;
- (void)setBaseLeaderboardID:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setFormattedScore:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setScore:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
