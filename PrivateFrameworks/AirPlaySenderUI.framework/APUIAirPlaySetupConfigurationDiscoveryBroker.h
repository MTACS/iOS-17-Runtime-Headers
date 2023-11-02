
@interface APUIAirPlaySetupConfigurationDiscoveryBroker : NSObject {
    NSString * _ID;
    NSString * _authToken;
}

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *authToken;

- (void).cxx_destruct;
- (id)ID;
- (id)authToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setAuthToken:(id)arg1;
- (void)setID:(id)arg1;

@end
