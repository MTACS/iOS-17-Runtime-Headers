
@interface MTRGeneralCommissioningClusterArmFailSafeParams : NSObject <NSCopying> {
    NSNumber * _breadcrumb;
    NSNumber * _expiryLengthSeconds;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *breadcrumb;
@property (nonatomic, copy) NSNumber *expiryLengthSeconds;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)breadcrumb;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)expiryLengthSeconds;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setBreadcrumb:(id)arg1;
- (void)setExpiryLengthSeconds:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
