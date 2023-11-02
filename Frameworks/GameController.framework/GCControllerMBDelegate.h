
@interface GCControllerMBDelegate : NSObject {
    id /* block */  _completionHandler;
    struct BTDiscoveryAgentImpl { } * _discoveryAgent;
    struct BTPairingAgentImpl { } * _pairingAgent;
    struct BTSessionImpl { } * _session;
    NSTimer * _timer;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)fireCompletionHandler;
- (void)scanTimeout:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)startScan;
- (void)stopScan;

@end
