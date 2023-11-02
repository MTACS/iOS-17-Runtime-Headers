
@interface MTRCommissioningParameters : NSObject {
    NSData * _attestationNonce;
    NSString * _countryCode;
    NSData * _csrNonce;
    <MTRDeviceAttestationDelegate> * _deviceAttestationDelegate;
    NSNumber * _failSafeTimeout;
    bool  _skipCommissioningComplete;
    NSData * _threadOperationalDataset;
    NSData * _wifiCredentials;
    NSData * _wifiSSID;
}

@property (nonatomic, copy) NSData *CSRNonce;
@property (nonatomic, copy) NSData *attestationNonce;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSData *csrNonce;
@property (nonatomic, retain) <MTRDeviceAttestationDelegate> *deviceAttestationDelegate;
@property (nonatomic, copy) NSNumber *failSafeExpiryTimeoutSecs;
@property (nonatomic, copy) NSNumber *failSafeTimeout;
@property (nonatomic) bool skipCommissioningComplete;
@property (nonatomic, copy) NSData *threadOperationalDataset;
@property (nonatomic, copy) NSData *wifiCredentials;
@property (nonatomic, copy) NSData *wifiSSID;

- (void).cxx_destruct;
- (id)CSRNonce;
- (id)attestationNonce;
- (id)countryCode;
- (id)csrNonce;
- (id)deviceAttestationDelegate;
- (id)failSafeExpiryTimeoutSecs;
- (id)failSafeTimeout;
- (void)setAttestationNonce:(id)arg1;
- (void)setCSRNonce:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCsrNonce:(id)arg1;
- (void)setDeviceAttestationDelegate:(id)arg1;
- (void)setFailSafeExpiryTimeoutSecs:(id)arg1;
- (void)setFailSafeTimeout:(id)arg1;
- (void)setSkipCommissioningComplete:(bool)arg1;
- (void)setThreadOperationalDataset:(id)arg1;
- (void)setWifiCredentials:(id)arg1;
- (void)setWifiSSID:(id)arg1;
- (bool)skipCommissioningComplete;
- (id)threadOperationalDataset;
- (id)wifiCredentials;
- (id)wifiSSID;

@end
