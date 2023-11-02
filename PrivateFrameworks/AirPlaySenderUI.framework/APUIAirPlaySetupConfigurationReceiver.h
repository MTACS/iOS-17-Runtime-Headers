
@interface APUIAirPlaySetupConfigurationReceiver : NSObject {
    NSString * _ID;
    NSString * _authString;
    bool  _routeToReceiverAfterSetup;
}

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *authString;
@property (nonatomic) bool routeToReceiverAfterSetup;

- (void).cxx_destruct;
- (id)ID;
- (id)authString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)routeToReceiverAfterSetup;
- (void)setAuthString:(id)arg1;
- (void)setID:(id)arg1;
- (void)setRouteToReceiverAfterSetup:(bool)arg1;

@end
