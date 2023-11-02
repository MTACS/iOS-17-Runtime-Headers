
@interface AFArbitrationParticipationContext : NSObject {
    NSArray * _advertisements;
    bool  _decisionIsWon;
    unsigned char  _deviceClass;
    double  _lastActivationTime;
    AFMyriadRecord * _ownAdvertisement;
    NSDate * _requestStartDate;
    CDASchemaCDAScoreBoosters * _scoreBoosters;
    NSNumber * _triggerType;
    NSDate * _voiceTriggerDate;
}

@property (nonatomic, copy) NSArray *advertisements;
@property (nonatomic) bool decisionIsWon;
@property (nonatomic) unsigned char deviceClass;
@property (nonatomic) double lastActivationTime;
@property (nonatomic, copy) AFMyriadRecord *ownAdvertisement;
@property (nonatomic, copy) NSDate *requestStartDate;
@property (nonatomic, retain) CDASchemaCDAScoreBoosters *scoreBoosters;
@property (nonatomic, copy) NSNumber *triggerType;
@property (nonatomic, copy) NSDate *voiceTriggerDate;

- (void).cxx_destruct;
- (id)advertisements;
- (bool)decisionIsWon;
- (unsigned char)deviceClass;
- (double)lastActivationTime;
- (id)ownAdvertisement;
- (id)requestStartDate;
- (id)scoreBoosters;
- (void)setAdvertisements:(id)arg1;
- (void)setDecisionIsWon:(bool)arg1;
- (void)setDeviceClass:(unsigned char)arg1;
- (void)setLastActivationTime:(double)arg1;
- (void)setOwnAdvertisement:(id)arg1;
- (void)setRequestStartDate:(id)arg1;
- (void)setScoreBoosters:(id)arg1;
- (void)setTriggerType:(id)arg1;
- (void)setVoiceTriggerDate:(id)arg1;
- (id)triggerType;
- (id)voiceTriggerDate;

@end
