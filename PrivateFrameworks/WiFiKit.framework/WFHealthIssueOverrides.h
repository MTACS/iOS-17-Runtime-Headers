
@interface WFHealthIssueOverrides : NSObject {
    bool  _carrierNetwork;
    long long  _cellularOutrankStateOverride;
    bool  _commonSSID;
    bool  _dnsFiltered;
    bool  _hiddenNetwork;
    bool  _legacyPHY;
    bool  _noInternetConnection;
    long long  _privateAddressOverride;
    long long  _securityOverride;
}

@property (nonatomic) bool carrierNetwork;
@property (nonatomic) long long cellularOutrankStateOverride;
@property (nonatomic) bool commonSSID;
@property (nonatomic) bool dnsFiltered;
@property (nonatomic) bool hiddenNetwork;
@property (nonatomic) bool legacyPHY;
@property (nonatomic) bool noInternetConnection;
@property (nonatomic) long long privateAddressOverride;
@property (nonatomic) long long securityOverride;

- (bool)carrierNetwork;
- (long long)cellularOutrankStateOverride;
- (bool)commonSSID;
- (bool)dnsFiltered;
- (bool)hiddenNetwork;
- (bool)legacyPHY;
- (bool)noInternetConnection;
- (long long)privateAddressOverride;
- (long long)securityOverride;
- (void)setCarrierNetwork:(bool)arg1;
- (void)setCellularOutrankStateOverride:(long long)arg1;
- (void)setCommonSSID:(bool)arg1;
- (void)setDnsFiltered:(bool)arg1;
- (void)setHiddenNetwork:(bool)arg1;
- (void)setLegacyPHY:(bool)arg1;
- (void)setNoInternetConnection:(bool)arg1;
- (void)setPrivateAddressOverride:(long long)arg1;
- (void)setSecurityOverride:(long long)arg1;

@end
