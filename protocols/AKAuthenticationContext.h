
@protocol AKAuthenticationContext <NSObject>

@required

- (NSString *)_proxiedAppName;
- (void)_setProxiedAppName:(NSString *)arg1;
- (NSString *)altDSID;
- (NSString *)appProvidedContext;
- (NSDictionary *)appProvidedData;
- (unsigned long long)authenticationMode;
- (unsigned long long)authenticationType;
- (bool)cliMode;
- (AKDevice *)companionDevice;
- (bool)isMDMInformationRequired;
- (AKDevice *)proxiedDevice;
- (long long)serviceType;
- (void)setAltDSID:(NSString *)arg1;
- (void)setAppProvidedContext:(NSString *)arg1;
- (void)setAppProvidedData:(NSDictionary *)arg1;
- (void)setAuthenticationMode:(unsigned long long)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setCliMode:(bool)arg1;
- (void)setCompanionDevice:(AKDevice *)arg1;
- (void)setIsMDMInformationRequired:(bool)arg1;
- (void)setProxiedDevice:(AKDevice *)arg1;
- (void)setServiceType:(long long)arg1;

@end
