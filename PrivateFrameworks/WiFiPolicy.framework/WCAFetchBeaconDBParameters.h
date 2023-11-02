
@interface WCAFetchBeaconDBParameters : NSObject {
    bool  _QBSS_Load;
    bool  _UAPSD;
    float  _antennas11c;
    NSString * _antennas11n;
    long long  _beaconInterval;
    bool  _has_11krm;
    float  _max_rates;
    NSString * _wlanAsel;
    NSString * _wlanFixedCapabilities;
    NSString * _wlanHTAmpduparam;
    NSString * _wlanHTCapabilities;
    NSString * _wlanHtexCapabilities;
    float  _wlanTimDtimPeriod;
    NSString * _wlanTxbf;
    NSString * _wlanVhtCapabilities;
    NSString * _wlanWfaIeWmeQosInfo;
}

@property (nonatomic) bool QBSS_Load;
@property (nonatomic) bool UAPSD;
@property (nonatomic) float antennas11c;
@property (nonatomic, retain) NSString *antennas11n;
@property (nonatomic) long long beaconInterval;
@property (nonatomic) bool has_11krm;
@property (nonatomic) float max_rates;
@property (nonatomic, retain) NSString *wlanAsel;
@property (nonatomic, retain) NSString *wlanFixedCapabilities;
@property (nonatomic, retain) NSString *wlanHTAmpduparam;
@property (nonatomic, retain) NSString *wlanHTCapabilities;
@property (nonatomic, retain) NSString *wlanHtexCapabilities;
@property (nonatomic) float wlanTimDtimPeriod;
@property (nonatomic, retain) NSString *wlanTxbf;
@property (nonatomic, retain) NSString *wlanVhtCapabilities;
@property (nonatomic, retain) NSString *wlanWfaIeWmeQosInfo;

- (void).cxx_destruct;
- (bool)QBSS_Load;
- (bool)UAPSD;
- (float)antennas11c;
- (id)antennas11n;
- (long long)beaconInterval;
- (void)fetchWithCompletion:(id /* block */)arg1;
- (bool)has_11krm;
- (float)max_rates;
- (void)setAntennas11c:(float)arg1;
- (void)setAntennas11n:(id)arg1;
- (void)setBeaconInterval:(long long)arg1;
- (void)setHas_11krm:(bool)arg1;
- (void)setMax_rates:(float)arg1;
- (void)setQBSS_Load:(bool)arg1;
- (void)setUAPSD:(bool)arg1;
- (void)setWlanAsel:(id)arg1;
- (void)setWlanFixedCapabilities:(id)arg1;
- (void)setWlanHTAmpduparam:(id)arg1;
- (void)setWlanHTCapabilities:(id)arg1;
- (void)setWlanHtexCapabilities:(id)arg1;
- (void)setWlanTimDtimPeriod:(float)arg1;
- (void)setWlanTxbf:(id)arg1;
- (void)setWlanVhtCapabilities:(id)arg1;
- (void)setWlanWfaIeWmeQosInfo:(id)arg1;
- (id)wlanAsel;
- (id)wlanFixedCapabilities;
- (id)wlanHTAmpduparam;
- (id)wlanHTCapabilities;
- (id)wlanHtexCapabilities;
- (float)wlanTimDtimPeriod;
- (id)wlanTxbf;
- (id)wlanVhtCapabilities;
- (id)wlanWfaIeWmeQosInfo;

@end
