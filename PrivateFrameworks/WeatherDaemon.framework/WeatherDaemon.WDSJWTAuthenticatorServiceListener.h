
@interface WeatherDaemon.WDSJWTAuthenticatorServiceListener : NSObject <NSXPCListenerDelegate, WeatherDaemon.WDSJWTAuthenticatorServiceListenerType> {
    void authServiceRequestDeduper;
    void delegate;
}

- (void).cxx_destruct;
- (void)generateTokenWithUrl:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
