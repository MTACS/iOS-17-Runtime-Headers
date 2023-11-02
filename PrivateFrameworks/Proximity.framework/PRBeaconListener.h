
@interface PRBeaconListener : PRRangingDevice <PRRangingClientProtocol> {
    <PRBeaconListenerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    struct DaemonBackedService { 
        NSXPCConnection *_connection; 
    }  _service;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRBeaconListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateState:(unsigned long long)arg1;
- (void)clearBeaconAllowlistWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deamonConnectionInterrupted;
- (void)deamonConnectionInvalidated;
- (id)delegate;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveNewSolutions:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)pushBeaconAllowlist:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (unsigned long long)state;

@end
