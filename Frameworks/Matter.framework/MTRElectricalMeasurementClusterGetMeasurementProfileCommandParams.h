
@interface MTRElectricalMeasurementClusterGetMeasurementProfileCommandParams : NSObject <NSCopying> {
    NSNumber * _attributeId;
    NSNumber * _numberOfIntervals;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _startTime;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *attributeId;
@property (nonatomic, copy) NSNumber *numberOfIntervals;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *startTime;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)attributeId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)numberOfIntervals;
- (id)serverSideProcessingTimeout;
- (void)setAttributeId:(id)arg1;
- (void)setNumberOfIntervals:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)startTime;
- (id)timedInvokeTimeoutMs;

@end
