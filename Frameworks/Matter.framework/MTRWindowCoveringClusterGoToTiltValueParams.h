
@interface MTRWindowCoveringClusterGoToTiltValueParams : NSObject <NSCopying> {
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _tiltValue;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *tiltValue;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTiltValue:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)tiltValue;
- (id)timedInvokeTimeoutMs;

@end
