
@interface CLReductiveFilterOptions : NSObject {
    double  _applyRangeEstimation;
    unsigned long long  _beaconType;
    double  _biasRateInMeasurement;
    double  _transmitPower;
}

@property (nonatomic) double applyRangeEstimation;
@property (nonatomic, readonly) unsigned long long beaconType;
@property (nonatomic) double biasRateInMeasurement;
@property (nonatomic, readonly) double transmitPower;

- (double)applyRangeEstimation;
- (unsigned long long)beaconType;
- (double)biasRateInMeasurement;
- (id)init;
- (id)initWithBeaconType:(unsigned long long)arg1;
- (id)initWithBeaconType:(unsigned long long)arg1 transmitPower:(double)arg2;
- (void)setApplyRangeEstimation:(double)arg1;
- (void)setBiasRateInMeasurement:(double)arg1;
- (double)transmitPower;

@end
