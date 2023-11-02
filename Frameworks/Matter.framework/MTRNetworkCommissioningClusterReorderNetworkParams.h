
@interface MTRNetworkCommissioningClusterReorderNetworkParams : NSObject <NSCopying> {
    NSNumber * _breadcrumb;
    NSData * _networkID;
    NSNumber * _networkIndex;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *breadcrumb;
@property (nonatomic, copy) NSData *networkID;
@property (nonatomic, copy) NSNumber *networkIndex;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)breadcrumb;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)networkID;
- (id)networkIndex;
- (id)serverSideProcessingTimeout;
- (void)setBreadcrumb:(id)arg1;
- (void)setNetworkID:(id)arg1;
- (void)setNetworkIndex:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
