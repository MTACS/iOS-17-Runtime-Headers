
@interface MTRFaultInjectionClusterFailRandomlyAtFaultParams : NSObject <NSCopying> {
    NSNumber * _id;
    NSNumber * _percentage;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _type;
}

@property (nonatomic, copy) NSNumber *id;
@property (nonatomic, copy) NSNumber *percentage;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)id;
- (id)init;
- (id)percentage;
- (id)serverSideProcessingTimeout;
- (void)setId:(id)arg1;
- (void)setPercentage:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setType:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)type;

@end
