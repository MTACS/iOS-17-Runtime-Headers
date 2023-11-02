
@interface GKGameRecordInternal : GKGameInternal {
    short  _achievementPoints;
    unsigned short  _achievements;
    unsigned short  _friendRank;
    NSDate * _lastPlayedDate;
    unsigned short  _maxFriendRank;
    unsigned int  _maxRank;
    NSDate * _purchaseDate;
    unsigned int  _rank;
    GKScoreInternal * _score;
}

@property (nonatomic) short achievementPoints;
@property (nonatomic) unsigned short achievements;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic, retain) NSDate *lastPlayedDate;
@property (nonatomic) unsigned short maxFriendRank;
@property (nonatomic) unsigned int maxRank;
@property (nonatomic, retain) NSDate *purchaseDate;
@property (nonatomic) unsigned int rank;
@property (nonatomic, retain) GKScoreInternal *score;

+ (id)gameRecordForGame:(id)arg1;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (short)achievementPoints;
- (unsigned short)achievements;
- (unsigned short)friendRank;
- (id)lastPlayedDate;
- (unsigned short)maxFriendRank;
- (unsigned int)maxRank;
- (id)purchaseDate;
- (unsigned int)rank;
- (id)score;
- (void)setAchievementPoints:(short)arg1;
- (void)setAchievements:(unsigned short)arg1;
- (void)setFriendRank:(unsigned short)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setMaxFriendRank:(unsigned short)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setScore:(id)arg1;
- (void)updateWithGame:(id)arg1;

@end
