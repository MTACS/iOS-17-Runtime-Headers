
@interface GKPlayerActivityRelationshipLeaderboardScore : GKInternalRepresentation {
    bool  _gained;
    NSString * _message;
    GKPlayerActivityRelationshipPlayer * _player;
    long long  _rank;
    NSString * _score;
    NSString * _symbol;
}

@property (nonatomic) bool gained;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) GKPlayerActivityRelationshipPlayer *player;
@property (nonatomic) long long rank;
@property (nonatomic, retain) NSString *score;
@property (nonatomic, retain) NSString *symbol;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (bool)gained;
- (id)initWithDictionary:(id)arg1;
- (id)message;
- (id)player;
- (long long)rank;
- (id)score;
- (void)setGained:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setScore:(id)arg1;
- (void)setSymbol:(id)arg1;
- (id)symbol;

@end
