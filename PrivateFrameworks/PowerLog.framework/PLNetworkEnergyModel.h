
@interface PLNetworkEnergyModel : NSObject {
    NSArray * _linkCost;
    NSArray * _linkDuration;
    NSArray * _linkLevel1Parameters;
    unsigned char  _linkType;
    double  _overallBytes;
    double  _overallDuration;
    double  _powerlevel1Duration;
    double  _powerlevel2Duration;
    double  _powerlevel3Duration;
    NSString * _taskUUID;
    unsigned int  _updateCount;
}

@property (retain) NSArray *linkCost;
@property (retain) NSArray *linkDuration;
@property (retain) NSArray *linkLevel1Parameters;
@property unsigned char linkType;
@property double overallBytes;
@property double overallDuration;
@property double powerlevel1Duration;
@property double powerlevel2Duration;
@property double powerlevel3Duration;
@property (retain) NSString *taskUUID;
@property unsigned int updateCount;

- (void).cxx_destruct;
- (double)computeLevel1TimeWithBytes:(double)arg1;
- (id)description;
- (double)getEnergy;
- (id)initWithLinkType:(unsigned char)arg1;
- (id)initWithLinkType:(unsigned char)arg1 withTaskUUID:(id)arg2;
- (id)linkCost;
- (id)linkDuration;
- (id)linkLevel1Parameters;
- (unsigned char)linkType;
- (double)overallBytes;
- (double)overallDuration;
- (double)powerlevel1Duration;
- (double)powerlevel2Duration;
- (double)powerlevel3Duration;
- (void)reportEnergyToPowerlogWithClientID:(short)arg1;
- (void)setLinkCost:(id)arg1;
- (void)setLinkDuration:(id)arg1;
- (void)setLinkLevel1Parameters:(id)arg1;
- (void)setLinkType:(unsigned char)arg1;
- (void)setOverallBytes:(double)arg1;
- (void)setOverallDuration:(double)arg1;
- (void)setPowerlevel1Duration:(double)arg1;
- (void)setPowerlevel2Duration:(double)arg1;
- (void)setPowerlevel3Duration:(double)arg1;
- (void)setTaskUUID:(id)arg1;
- (void)setUpdateCount:(unsigned int)arg1;
- (id)taskUUID;
- (void)updateAllLevelTimesWithLevel1Time:(double)arg1 withUpdateDuration:(double)arg2;
- (unsigned int)updateCount;
- (void)updateWithBytes:(double)arg1 withDuration:(double)arg2;

@end
