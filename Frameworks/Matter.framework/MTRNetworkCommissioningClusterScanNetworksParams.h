
@interface MTRNetworkCommissioningClusterScanNetworksParams : NSObject <NSCopying> {
    NSNumber * _breadcrumb;
    NSNumber * _serverSideProcessingTimeout;
    NSData * _ssid;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *breadcrumb;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSData *ssid;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)breadcrumb;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setBreadcrumb:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setSsid:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)ssid;
- (id)timedInvokeTimeoutMs;

@end
