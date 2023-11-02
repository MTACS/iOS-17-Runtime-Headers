
@interface MTRTargetNavigatorClusterNavigateTargetParams : NSObject <NSCopying> {
    NSString * _data;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _target;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSString *data;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *target;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setData:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)target;
- (id)timedInvokeTimeoutMs;

@end
