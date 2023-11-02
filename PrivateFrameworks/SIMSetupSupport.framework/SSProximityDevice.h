
@interface SSProximityDevice : NSObject <CoreTelephonyClientCellularPlanManagementDelegate> {
    CoreTelephonyClient * _client;
    unsigned long long  _endpoint;
    id /* block */  _eventHandler;
    NSDictionary * _remoteInfo;
    CUMessageSession * _session;
}

@property (retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long endpoint;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *remoteInfo;
@property (retain) CUMessageSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate:(id /* block */)arg1;
- (id)client;
- (unsigned long long)endpoint;
- (id /* block */)eventHandler;
- (id)initWithQueue:(id)arg1 endpoint:(unsigned long long)arg2 remoteInfo:(id)arg3;
- (void)invalidate:(bool)arg1;
- (void)proxSetupAuthEventUpdate:(id)arg1;
- (id)remoteInfo;
- (id)session;
- (void)setClient:(id)arg1;
- (void)setEndpoint:(unsigned long long)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setRemoteInfo:(id)arg1;
- (void)setSession:(id)arg1;
- (id)skEventFromDictionary:(id)arg1;
- (id)templateSession;
- (void)verifyPIN:(id)arg1;

@end
