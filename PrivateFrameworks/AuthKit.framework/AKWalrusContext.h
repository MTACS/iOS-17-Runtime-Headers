
@interface AKWalrusContext : NSObject <AKAuthenticationContext, NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appProvidedContext;
    NSDictionary * _appProvidedData;
    unsigned long long  _authenticationMode;
    unsigned long long  _authenticationType;
    bool  _cliMode;
    AKDevice * _companionDevice;
    bool  _isMDMInformationRequired;
    NSString * _proxiedAppName;
    AKDevice * _proxiedDevice;
    long long  _serviceType;
}

@property (setter=_setProxiedAppName:, nonatomic, copy) NSString *_proxiedAppName;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appProvidedContext;
@property (nonatomic, copy) NSDictionary *appProvidedData;
@property (nonatomic) unsigned long long authenticationMode;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) bool cliMode;
@property (nonatomic, copy) AKDevice *companionDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMDMInformationRequired;
@property (nonatomic, copy) AKDevice *proxiedDevice;
@property (nonatomic) long long serviceType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_proxiedAppName;
- (void)_setProxiedAppName:(id)arg1;
- (id)altDSID;
- (id)appProvidedContext;
- (id)appProvidedData;
- (unsigned long long)authenticationMode;
- (unsigned long long)authenticationType;
- (bool)cliMode;
- (id)companionDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isMDMInformationRequired;
- (id)proxiedDevice;
- (long long)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setAppProvidedContext:(id)arg1;
- (void)setAppProvidedData:(id)arg1;
- (void)setAuthenticationMode:(unsigned long long)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setCliMode:(bool)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setIsMDMInformationRequired:(bool)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setServiceType:(long long)arg1;

@end
