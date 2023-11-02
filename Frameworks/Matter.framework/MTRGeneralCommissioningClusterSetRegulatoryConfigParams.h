
@interface MTRGeneralCommissioningClusterSetRegulatoryConfigParams : NSObject <NSCopying> {
    NSNumber * _breadcrumb;
    NSString * _countryCode;
    NSNumber * _newRegulatoryConfig;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *breadcrumb;
@property (nonatomic, copy) NSString *countryCode;
@property (getter=getNewRegulatoryConfig, nonatomic, copy) NSNumber *newRegulatoryConfig;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)breadcrumb;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)getNewRegulatoryConfig;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setBreadcrumb:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setNewRegulatoryConfig:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
