
@interface MTRThermostatClusterSetpointRaiseLowerParams : NSObject <NSCopying> {
    NSNumber * _amount;
    NSNumber * _mode;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *amount;
@property (nonatomic, copy) NSNumber *mode;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)mode;
- (id)serverSideProcessingTimeout;
- (void)setAmount:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
