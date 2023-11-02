
@interface LRRReplayResultStat : NSObject {
    unsigned int  _evaluatedCount;
    unsigned int  _mdRequestTrueCount;
    unsigned int  _mdResponseTrueCount;
    unsigned int  _mrRequestTrueCount;
    unsigned int  _mrResponseTrueCount;
    unsigned int  _nluResponseTrueCount;
    unsigned int  _topUserParseTrueCount;
    NSDictionary * _userIsHabitualUserByWeek;
}

@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) unsigned int mdRequestTrueCount;
@property (nonatomic) unsigned int mdResponseTrueCount;
@property (nonatomic) unsigned int mrRequestTrueCount;
@property (nonatomic) unsigned int mrResponseTrueCount;
@property (nonatomic) unsigned int nluResponseTrueCount;
@property (nonatomic) unsigned int topUserParseTrueCount;
@property (nonatomic) NSDictionary *userIsHabitualUserByWeek;

- (void)append:(id)arg1;
- (unsigned int)evaluatedCount;
- (id)init;
- (unsigned int)mdRequestTrueCount;
- (unsigned int)mdResponseTrueCount;
- (unsigned int)mrRequestTrueCount;
- (unsigned int)mrResponseTrueCount;
- (unsigned int)nluResponseTrueCount;
- (void)setEvaluatedCount:(unsigned int)arg1;
- (void)setMdRequestTrueCount:(unsigned int)arg1;
- (void)setMdResponseTrueCount:(unsigned int)arg1;
- (void)setMrRequestTrueCount:(unsigned int)arg1;
- (void)setMrResponseTrueCount:(unsigned int)arg1;
- (void)setNluResponseTrueCount:(unsigned int)arg1;
- (void)setTopUserParseTrueCount:(unsigned int)arg1;
- (void)setUserIsHabitualUserByWeek:(id)arg1;
- (unsigned int)topUserParseTrueCount;
- (id)userIsHabitualUserByWeek;

@end
