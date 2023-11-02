
@interface APUIAirPlaySetupConfigurationWiFi : NSObject {
    NSString * _SSID;
    NSString * _captivePortalBypassToken;
    NSString * _passphrase;
}

@property (nonatomic, copy) NSString *SSID;
@property (nonatomic, copy) NSString *captivePortalBypassToken;
@property (nonatomic, copy) NSString *passphrase;

- (void).cxx_destruct;
- (id)SSID;
- (id)captivePortalBypassToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)passphrase;
- (void)setCaptivePortalBypassToken:(id)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setSSID:(id)arg1;

@end
