
@interface HRAIrregularRhythmResult : NSObject {
    NSDictionary * _metricsForCoreAnalytics;
    NSMutableSet * _negativeUUIDs;
    NSMutableSet * _positiveUUIDs;
    bool  _tachogramShouldBeRequested;
    bool  _userShouldBeAlerted;
    NSMutableSet * _uuidsForNextCycle;
}

@property (nonatomic, retain) NSDictionary *metricsForCoreAnalytics;
@property (nonatomic, retain) NSMutableSet *negativeUUIDs;
@property (nonatomic, retain) NSMutableSet *positiveUUIDs;
@property (nonatomic) bool tachogramShouldBeRequested;
@property (nonatomic) bool userShouldBeAlerted;
@property (nonatomic, retain) NSMutableSet *uuidsForNextCycle;

- (void).cxx_destruct;
- (id)metricsForCoreAnalytics;
- (id)negativeUUIDs;
- (id)positiveUUIDs;
- (void)setMetricsForCoreAnalytics:(id)arg1;
- (void)setNegativeUUIDs:(id)arg1;
- (void)setPositiveUUIDs:(id)arg1;
- (void)setTachogramShouldBeRequested:(bool)arg1;
- (void)setUserShouldBeAlerted:(bool)arg1;
- (void)setUuidsForNextCycle:(id)arg1;
- (bool)tachogramShouldBeRequested;
- (bool)userShouldBeAlerted;
- (id)uuidsForNextCycle;

@end
