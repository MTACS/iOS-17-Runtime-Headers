
@interface HLOxygenSaturationMeasurement : NSObject {
    HLHeartRateData * _averageHeartRateData;
    NSDateInterval * _dateInterval;
    NSNumber * _oxygenSaturationPercentage;
    NSNumber * _pressureInKilopascals;
}

@property (nonatomic, retain) HLHeartRateData *averageHeartRateData;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic, retain) NSNumber *oxygenSaturationPercentage;
@property (nonatomic, retain) NSNumber *pressureInKilopascals;

- (void).cxx_destruct;
- (id)averageHeartRateData;
- (id)dateInterval;
- (id)oxygenSaturationPercentage;
- (id)pressureInKilopascals;
- (void)setAverageHeartRateData:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setOxygenSaturationPercentage:(id)arg1;
- (void)setPressureInKilopascals:(id)arg1;

@end
