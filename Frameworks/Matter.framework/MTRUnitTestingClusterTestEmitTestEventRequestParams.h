
@interface MTRUnitTestingClusterTestEmitTestEventRequestParams : NSObject <NSCopying> {
    NSNumber * _arg1;
    NSNumber * _arg2;
    NSNumber * _arg3;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *arg1;
@property (nonatomic, copy) NSNumber *arg2;
@property (nonatomic, copy) NSNumber *arg3;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)arg1;
- (id)arg2;
- (id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setArg1:(id)arg1;
- (void)setArg2:(id)arg1;
- (void)setArg3:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
