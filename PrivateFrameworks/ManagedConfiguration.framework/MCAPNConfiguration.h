
@interface MCAPNConfiguration : NSObject {
    NSNumber * _allowedProtocolMask;
    NSNumber * _allowedProtocolMaskInDomesticRoaming;
    NSNumber * _allowedProtocolMaskInRoaming;
    NSString * _authenticationType;
    NSNumber * _defaultProtocolMask;
    NSNumber * _enableXLAT464;
    NSString * _name;
    NSString * _password;
    NSNumber * _proxyPort;
    NSString * _proxyServer;
    NSString * _username;
}

@property (nonatomic, retain) NSNumber *allowedProtocolMask;
@property (nonatomic, retain) NSNumber *allowedProtocolMaskInDomesticRoaming;
@property (nonatomic, retain) NSNumber *allowedProtocolMaskInRoaming;
@property (nonatomic, retain) NSString *authenticationType;
@property (nonatomic, retain) NSNumber *defaultProtocolMask;
@property (nonatomic, retain) NSNumber *enableXLAT464;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSNumber *proxyPort;
@property (nonatomic, retain) NSString *proxyServer;
@property (nonatomic, readonly) NSDictionary *telephonyRepresentation;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)allowedProtocolMask;
- (id)allowedProtocolMaskInDomesticRoaming;
- (id)allowedProtocolMaskInRoaming;
- (id)authenticationType;
- (id)defaultProtocolMask;
- (id)description;
- (id)enableXLAT464;
- (id)initWithDictionary:(id)arg1 outError:(id*)arg2;
- (id)localizedAuthenticationType;
- (id)name;
- (id)password;
- (id)proxyPort;
- (id)proxyServer;
- (void)setAllowedProtocolMask:(id)arg1;
- (void)setAllowedProtocolMaskInDomesticRoaming:(id)arg1;
- (void)setAllowedProtocolMaskInRoaming:(id)arg1;
- (void)setAuthenticationType:(id)arg1;
- (void)setDefaultProtocolMask:(id)arg1;
- (void)setEnableXLAT464:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setProxyPort:(id)arg1;
- (void)setProxyServer:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)telephonyRepresentation;
- (id)username;

@end
