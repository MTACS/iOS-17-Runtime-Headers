
@interface WLNETRBClient : NSObject {
    id /* block */  _dhcpStartCompletionBlock;
    id /* block */  _dhcpStopCompletionBlock;
    struct NETRBClient { } * _netrbClientRef;
}

- (void).cxx_destruct;
- (bool)_completionsAreNil;
- (void)_didStartDHCPWithSuccess:(bool)arg1;
- (void)_didStopDHCPWithSuccess:(bool)arg1;
- (struct NETRBClient { }*)_netrbClient;
- (bool)_startDHCPWithInterface:(id)arg1;
- (bool)_stopDHCP;
- (id)init;
- (bool)isIPAddressInRange:(id)arg1;
- (void)startDHCPWithCompletion:(id /* block */)arg1;
- (void)stopDHCPWithCompletion:(id /* block */)arg1;

@end
