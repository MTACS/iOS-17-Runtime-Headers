
@interface AVAirMessageDispatcher : NSObject <AVAirTransportDelegate, AVBonjourServiceClientDelegate> {
    AVBonjourServiceClient * _bonjourServiceClient;
    AVAirTransport * _channel;
    NSNetService * _currentNetService;
    <AVAirMessageDispatcherClientDelegate> * _delegate;
}

@property (nonatomic, readonly) AVBonjourServiceClient *bonjourServiceClient;
@property (nonatomic, retain) AVAirTransport *channel;
@property (nonatomic, retain) NSNetService *currentNetService;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVAirMessageDispatcherClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool haveAirPlayService;
@property (readonly) Class superclass;

+ (bool)_isDispatcherEnabled;
+ (id)shared;

- (void).cxx_destruct;
- (void)airTransport:(id)arg1 didReceiveObject:(id)arg2;
- (void)airTransportInputDidClose:(id)arg1;
- (void)airTransportOutputDidOpen:(id)arg1;
- (id)bonjourServiceClient;
- (id)channel;
- (id)currentNetService;
- (id)delegate;
- (id)description;
- (void)didConnectToBonjourService:(id)arg1 channel:(id)arg2;
- (bool)haveAirPlayService;
- (id)init;
- (void)sendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)setChannel:(id)arg1;
- (void)setCurrentNetService:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
