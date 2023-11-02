
@interface MTRWindowCoveringClusterGoToLiftValueParams : NSObject <NSCopying> {
    NSNumber * _liftValue;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *liftValue;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)liftValue;
- (id)serverSideProcessingTimeout;
- (void)setLiftValue:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
