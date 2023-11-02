
@interface MTROnOffClusterOnWithTimedOffParams : NSObject <NSCopying> {
    NSNumber * _offWaitTime;
    NSNumber * _onOffControl;
    NSNumber * _onTime;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *offWaitTime;
@property (nonatomic, copy) NSNumber *onOffControl;
@property (nonatomic, copy) NSNumber *onTime;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)offWaitTime;
- (id)onOffControl;
- (id)onTime;
- (id)serverSideProcessingTimeout;
- (void)setOffWaitTime:(id)arg1;
- (void)setOnOffControl:(id)arg1;
- (void)setOnTime:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
