
@interface MTRWindowCoveringClusterGoToTiltPercentageParams : NSObject <NSCopying> {
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _tiltPercent100thsValue;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *tiltPercent100thsValue;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTiltPercent100thsValue:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)tiltPercent100thsValue;
- (id)timedInvokeTimeoutMs;

@end
