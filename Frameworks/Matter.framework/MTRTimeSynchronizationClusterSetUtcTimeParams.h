
@interface MTRTimeSynchronizationClusterSetUtcTimeParams : NSObject <NSCopying> {
    NSNumber * _granularity;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timeSource;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _utcTime;
}

@property (nonatomic, copy) NSNumber *granularity;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timeSource;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *utcTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)granularity;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setGranularity:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimeSource:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUtcTime:(id)arg1;
- (id)timeSource;
- (id)timedInvokeTimeoutMs;
- (id)utcTime;

@end
