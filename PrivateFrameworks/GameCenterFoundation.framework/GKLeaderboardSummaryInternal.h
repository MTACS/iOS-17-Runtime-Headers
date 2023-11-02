
@interface GKLeaderboardSummaryInternal : GKInternalRepresentation {
    NSString * _baseLeaderboardID;
    unsigned long long  _context;
    unsigned long long  _duration;
    NSString * _formattedScoreValue;
    unsigned long long  _friendRank;
    NSString * _groupID;
    NSString * _leaderboardID;
    unsigned long long  _nextStartDate;
    unsigned long long  _rank;
    unsigned long long  _scoreValue;
    unsigned long long  _startDate;
    unsigned long long  _status;
    NSString * _timeScope;
    NSString * _title;
    unsigned long long  _totalEntries;
    unsigned long long  _totalFriendEntries;
    NSString * _type;
}

@property (nonatomic, retain) NSString *baseLeaderboardID;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, retain) NSString *formattedScoreValue;
@property (nonatomic) unsigned long long friendRank;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, retain) NSString *leaderboardID;
@property (nonatomic) unsigned long long nextStartDate;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) unsigned long long scoreValue;
@property (nonatomic) unsigned long long startDate;
@property (nonatomic) unsigned long long status;
@property (nonatomic, retain) NSString *timeScope;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned long long totalEntries;
@property (nonatomic) unsigned long long totalFriendEntries;
@property (nonatomic, retain) NSString *type;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)baseLeaderboardID;
- (unsigned long long)context;
- (unsigned long long)duration;
- (id)formattedScoreValue;
- (unsigned long long)friendRank;
- (id)groupID;
- (id)leaderboardID;
- (unsigned long long)nextStartDate;
- (unsigned long long)rank;
- (unsigned long long)scoreValue;
- (void)setBaseLeaderboardID:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setFormattedScoreValue:(id)arg1;
- (void)setFriendRank:(unsigned long long)arg1;
- (void)setGroupID:(id)arg1;
- (void)setLeaderboardID:(id)arg1;
- (void)setNextStartDate:(unsigned long long)arg1;
- (void)setRank:(unsigned long long)arg1;
- (void)setScoreValue:(unsigned long long)arg1;
- (void)setStartDate:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTimeScope:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTotalEntries:(unsigned long long)arg1;
- (void)setTotalFriendEntries:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (unsigned long long)startDate;
- (unsigned long long)status;
- (id)timeScope;
- (id)title;
- (unsigned long long)totalEntries;
- (unsigned long long)totalFriendEntries;
- (id)type;

@end
