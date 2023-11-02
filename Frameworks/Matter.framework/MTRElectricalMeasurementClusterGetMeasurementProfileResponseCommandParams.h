
@interface MTRElectricalMeasurementClusterGetMeasurementProfileResponseCommandParams : NSObject <NSCopying> {
    NSNumber * _attributeId;
    NSArray * _intervals;
    NSNumber * _numberOfIntervalsDelivered;
    NSNumber * _profileIntervalPeriod;
    NSNumber * _startTime;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *attributeId;
@property (nonatomic, copy) NSArray *intervals;
@property (nonatomic, copy) NSNumber *numberOfIntervalsDelivered;
@property (nonatomic, copy) NSNumber *profileIntervalPeriod;
@property (nonatomic, copy) NSNumber *startTime;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)attributeId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)intervals;
- (id)numberOfIntervalsDelivered;
- (id)profileIntervalPeriod;
- (void)setAttributeId:(id)arg1;
- (void)setIntervals:(id)arg1;
- (void)setNumberOfIntervalsDelivered:(id)arg1;
- (void)setProfileIntervalPeriod:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)startTime;
- (id)status;
- (id)timedInvokeTimeoutMs;

@end
