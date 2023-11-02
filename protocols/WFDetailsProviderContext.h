
@protocol WFDetailsProviderContext <WFProviderContext>

@required

- (bool)autoJoinEnabled;
- (bool)autoLoginEnabled;
- (void)cancelNetworkQualityRun;
- (bool)diagnosable;
- (<WFDiagnosticsProviderContext> *)diagnosticsContext;
- (void)disableRandomMAC;
- (void)enableRandomMAC;
- (void)forget;
- (NSString *)hardwareMACAddress;
- (bool)isConnectedWithHardwareAddress;
- (bool)isCurrent;
- (bool)isInSaveDataMode;
- (bool)isKnownNetwork;
- (bool)isPrivacyProxyEnabled;
- (bool)isRandomMACAddressConfigurable;
- (bool)isRandomMACAddressDisabled;
- (bool)isRandomMACFeatureEnabled;
- (bool)isRandomMACSwitchOn;
- (bool)isWiFiOutranked;
- (void)join;
- (void)manage;
- (void)openRecommendationLink;
- (void)overrideWiFiOutrank;
- (NSString *)randomMACAddress;
- (NSArray *)recommendations;
- (void)renewLease;
- (void)runNetworkQualityWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, double, NSDate *, void*
- (void)setAutoJoinEnabled:(bool)arg1;
- (void)setAutoLoginEnabled:(bool)arg1;
- (void)setDiagnosable:(bool)arg1;
- (void)setIsInSaveDataMode:(bool)arg1;
- (void)setIsPrivacyProxyEnabled:(bool)arg1;
- (void)setStaticPrivateMACFooterText:(NSString *)arg1;
- (void)setWifiMode:(long long)arg1;
- (NSString *)staticPrivateMACFooterText;
- (long long)wifiMode;

@optional

- (unsigned long long)autoJoinConfigurable;
- (id /* block */)credentialsTappedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, unsigned long long, void*, id, SEL
- (bool)isCredentialsVisible;
- (bool)isJoinable;
- (bool)isWifiModeConfigurable;
- (unsigned long long)networkOrigin;
- (void)openPortalURL;
- (NSString *)password;
- (NSString *)portalURL;
- (void)setCredentialsTappedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)setJoinable:(bool)arg1;
- (void)setTurnOFFPrivateMACFooterText:(NSString *)arg1;
- (void)setTurnONPrivateMACFooterText:(NSString *)arg1;
- (NSString *)turnOFFPrivateMACFooterText;
- (NSString *)turnONPrivateMACFooterText;
- (NSString *)username;

@end
