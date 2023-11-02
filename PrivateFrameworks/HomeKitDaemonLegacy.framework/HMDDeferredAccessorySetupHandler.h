
@interface HMDDeferredAccessorySetupHandler : HMFObject {
    id /* block */  _callback;
    HMFObject * _context;
    HMDAccessoryPairingEvent * _pairingEvent;
    HAPAccessoryServer * _server;
    HMFTimer * _timer;
}

@property (readonly) id /* block */ callback;
@property (readonly) HMFObject *context;
@property (readonly) HMDAccessoryPairingEvent *pairingEvent;
@property (readonly) HAPAccessoryServer *server;
@property (readonly) HMFTimer *timer;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)context;
- (id)initWithServer:(id)arg1 timer:(id)arg2 pairingEvent:(id)arg3 callback:(id /* block */)arg4 context:(id)arg5;
- (id)pairingEvent;
- (id)server;
- (id)timer;

@end
