
@interface HMAccessoryLinkQualityResult : NSObject {
    unsigned long long  _linkLayerType;
    unsigned long long  _linkQuality;
    NSString * _macAddress;
    NSString * _networkName;
    bool  _supported;
}

@property (nonatomic, readonly) unsigned long long linkLayerType;
@property (nonatomic, readonly) unsigned long long linkQuality;
@property (nonatomic, readonly, copy) NSString *macAddress;
@property (nonatomic, readonly, copy) NSString *networkName;
@property (nonatomic, readonly) bool supported;

- (void).cxx_destruct;
- (id)initWithLinkQualitySupported:(bool)arg1 linkLayerType:(unsigned long long)arg2 macAddress:(id)arg3 networkName:(id)arg4 linkQuality:(unsigned long long)arg5;
- (unsigned long long)linkLayerType;
- (unsigned long long)linkQuality;
- (id)macAddress;
- (id)networkName;
- (bool)supported;

@end
