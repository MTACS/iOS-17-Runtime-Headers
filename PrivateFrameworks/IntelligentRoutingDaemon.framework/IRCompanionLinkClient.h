
@interface IRCompanionLinkClient : NSObject {
    RPCompanionLinkClient * _client;
    bool  _companionLinkClientActive;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    IRRapportProvider * _rapportProvider;
}

@property (nonatomic, retain) RPCompanionLinkClient *client;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) IRRapportProvider *rapportProvider;

- (void).cxx_destruct;
- (void)_didUpdateRapportDevices;
- (id)client;
- (unsigned long long)currentControlFlags;
- (long long)currentRssiThreshold;
- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithRapportProvider:(id)arg1 targetQueue:(id)arg2;
- (id)rapportProvider;
- (void)setClient:(id)arg1;
- (void)startDiscovery;
- (void)stopDiscovery;

@end
