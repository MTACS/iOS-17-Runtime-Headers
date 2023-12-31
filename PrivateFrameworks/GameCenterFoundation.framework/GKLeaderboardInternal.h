
@interface GKLeaderboardInternal : GKInternalRepresentation {
    NSString * _baseLeaderboardID;
    NSString * _context;
    GKPlayerInternal * _creator;
    double  _duration;
    unsigned short  _friendRank;
    unsigned short  _friendRankCount;
    NSString * _groupIdentifier;
    NSDictionary * _icons;
    NSString * _identifier;
    NSDate * _lastSubmittedDate;
    NSString * _leaderboardSetIdentifier;
    unsigned int  _maxRank;
    NSDate * _nextStartDate;
    unsigned int  _overallRank;
    unsigned int  _overallRankCount;
    GKScoreInternal * _playerScore;
    NSString * _recordID;
    NSArray * _scores;
    NSDate * _startDate;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, retain) NSString *baseLeaderboardID;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) GKPlayerInternal *creator;
@property (nonatomic) double duration;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short friendRankCount;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, retain) NSDictionary *icons;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *lastSubmittedDate;
@property (nonatomic, retain) NSString *leaderboardSetIdentifier;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long maxRange;
@property (nonatomic) unsigned int maxRank;
@property (nonatomic, retain) NSDate *nextStartDate;
@property (nonatomic) unsigned int overallRank;
@property (nonatomic) unsigned int overallRankCount;
@property (nonatomic, retain) GKScoreInternal *playerScore;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long type;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)baseLeaderboardID;
- (id)category;
- (id)context;
- (id)creator;
- (double)duration;
- (unsigned short)friendRank;
- (unsigned short)friendRankCount;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)icons;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)lastSubmittedDate;
- (id)leaderboardSetIdentifier;
- (id)localizedTitle;
- (unsigned long long)maxRange;
- (unsigned int)maxRank;
- (id)nextStartDate;
- (unsigned int)overallRank;
- (unsigned int)overallRankCount;
- (id)playerScore;
- (id)recordID;
- (id)scores;
- (void)setBaseLeaderboardID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCreator:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFriendRank:(unsigned short)arg1;
- (void)setFriendRankCount:(unsigned short)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSubmittedDate:(id)arg1;
- (void)setLeaderboardSetIdentifier:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setNextStartDate:(id)arg1;
- (void)setOverallRank:(unsigned int)arg1;
- (void)setOverallRankCount:(unsigned int)arg1;
- (void)setPlayerScore:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)startDate;
- (id)title;
- (long long)type;

@end
