
@interface PXPublishMomentShareBudgetOverridePromptConfiguration : NSObject {
    unsigned long long  _assetCount;
    NSString * _deviceModel;
    unsigned long long  _networkType;
    bool  _useWLAN;
}

@property (nonatomic) unsigned long long assetCount;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic) unsigned long long networkType;
@property (nonatomic) bool useWLAN;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)deviceModel;
- (id)initWithUseWLAN:(bool)arg1 networkType:(unsigned long long)arg2 assetCount:(unsigned long long)arg3 deviceModel:(id)arg4;
- (unsigned long long)networkType;
- (void)setAssetCount:(unsigned long long)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setNetworkType:(unsigned long long)arg1;
- (void)setUseWLAN:(bool)arg1;
- (bool)useWLAN;

@end
