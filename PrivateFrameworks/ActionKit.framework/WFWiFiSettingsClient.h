
@interface WFWiFiSettingsClient : WFSettingsClient <WFBooleanStateSetting> {
    CWFInterface * _interface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CWFInterface *interface;
@property (readonly) Class superclass;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)BSSID;
- (id)RSSI;
- (id)channel;
- (void)dealloc;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)hardwareMACAddress;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (id)networkName;
- (id)noise;
- (id)rxRate;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)txRate;
- (id)wifiStandard;

@end
