
@interface MCAPNInfo : NSObject {
    NSString * _apnName;
    NSString * _password;
    NSString * _proxy;
    NSNumber * _proxyPort;
    NSString * _username;
}

@property (nonatomic, retain) NSString *apnName;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *proxy;
@property (nonatomic, retain) NSNumber *proxyPort;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)apnName;
- (id)defaultsRepresentation;
- (id)description;
- (id)password;
- (id)proxy;
- (id)proxyPort;
- (void)setApnName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setProxyPort:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)strippedDefaultsRepresentation;
- (id)username;

@end
