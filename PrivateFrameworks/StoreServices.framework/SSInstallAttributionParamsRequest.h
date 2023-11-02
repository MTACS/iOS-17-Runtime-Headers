
@interface SSInstallAttributionParamsRequest : SSRequest <SSXPCCoding> {
    NSString * _adNetworkId;
    NSNumber * _appAdamId;
    NSString * _attributionSignature;
    NSNumber * _campaignId;
    NSString * _impressionId;
    NSString * _originatingBundleId;
    bool  _overrideCampaignLimit;
    NSNumber * _timestamp;
}

@property (nonatomic, readonly) NSString *adNetworkId;
@property (nonatomic, readonly) NSNumber *appAdamId;
@property (nonatomic, readonly) NSString *attributionSignature;
@property (nonatomic, readonly) NSNumber *campaignId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *impressionId;
@property (nonatomic, readonly) NSString *originatingBundleId;
@property (nonatomic, readonly) bool overrideCampaignLimit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *timestamp;

- (void).cxx_destruct;
- (id)adNetworkId;
- (id)appAdamId;
- (id)attributionSignature;
- (id)campaignId;
- (id)copyXPCEncoding;
- (id)impressionId;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 originatingBundleId:(id)arg7;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 originatingBundleId:(id)arg7 overrideCampaignLimit:(bool)arg8;
- (id)initWithXPCEncoding:(id)arg1;
- (id)originatingBundleId;
- (bool)overrideCampaignLimit;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (id)timestamp;

@end
