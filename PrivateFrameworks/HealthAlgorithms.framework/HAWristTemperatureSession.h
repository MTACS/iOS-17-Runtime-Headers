
@interface HAWristTemperatureSession : NSObject {
    float  _a0CorrectionCoefficient;
    NSString * _algorithmVersion;
    float  _c0CorrectionCoefficient;
    unsigned char  _dataVersion;
    NSMeasurement * _meanQuiescentPower;
    unsigned long long  _numWristTemperatures;
    NSData * _representation;
    NSDateInterval * _sessionInterval;
    NSMeasurement * _stdDevQuiescentPower;
}

@property (nonatomic, readonly) float a0CorrectionCoefficient;
@property (nonatomic, readonly) NSString *algorithmVersion;
@property (nonatomic, readonly) float c0CorrectionCoefficient;
@property (nonatomic, readonly) unsigned char dataVersion;
@property (nonatomic, readonly) NSMeasurement *meanQuiescentPower;
@property (nonatomic, readonly) unsigned long long numWristTemperatures;
@property (nonatomic, readonly) NSData *representation;
@property (nonatomic, readonly) NSDateInterval *sessionInterval;
@property (nonatomic, readonly) NSMeasurement *stdDevQuiescentPower;
@property (nonatomic, readonly, copy) HAWristTemperatureEnumerator *wristTemperatureEnumerator;

+ (void)getPackedWristTemperatureV0Sample:(struct PackedWristTemperatureV0 { unsigned int x1; float x2; float x3; float x4; float x5; unsigned char x6; }*)arg1 data:(id)arg2 index:(unsigned long long)arg3;

- (void).cxx_destruct;
- (float)a0CorrectionCoefficient;
- (id)algorithmVersion;
- (float)c0CorrectionCoefficient;
- (unsigned char)dataVersion;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(id)arg3;
- (id)meanQuiescentPower;
- (unsigned long long)numWristTemperatures;
- (bool)parsePacketV0;
- (id)representation;
- (id)sessionInterval;
- (id)sessionIntervalV0WithStartTime:(double)arg1;
- (id)stdDevQuiescentPower;
- (id)wristTemperatureEnumerator;

@end
