
@interface TRNetworkOperation : TROperation {
    id /* block */  _sendingWiFiInfoHandler;
}

@property (nonatomic, copy) id /* block */ sendingWiFiInfoHandler;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (void)_sendRequestWithSSID:(id)arg1 password:(id)arg2;
- (void)execute;
- (id /* block */)sendingWiFiInfoHandler;
- (void)setSendingWiFiInfoHandler:(id /* block */)arg1;

@end
