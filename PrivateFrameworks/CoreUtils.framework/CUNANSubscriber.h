
@interface CUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate> {
    id /* block */  _activateCompletion;
    unsigned int  _changeFlags;
    unsigned int  _controlFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _endpointChangedHandler;
    id /* block */  _endpointFoundHandler;
    id /* block */  _endpointLostHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    id /* block */  _receiveHandler;
    NSString * _serviceType;
    bool  _startedCalled;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSMutableDictionary * _wfaEndpoints;
    WiFiAwareSubscriber * _wfaSubscriber;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int controlFlags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *discoveredEndpoints;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ endpointChangedHandler;
@property (nonatomic, copy) id /* block */ endpointFoundHandler;
@property (nonatomic, copy) id /* block */ endpointLostHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id /* block */ receiveHandler;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)_lostAllEndpoints;
- (void)_subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)_subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)changeFlags;
- (unsigned int)controlFlags;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)discoveredEndpoints;
- (id)dispatchQueue;
- (id /* block */)endpointChangedHandler;
- (id /* block */)endpointFoundHandler;
- (id /* block */)endpointLostHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id /* block */)receiveHandler;
- (void)sendMessageData:(id)arg1 endpoint:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serviceType;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setControlFlags:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEndpointChangedHandler:(id /* block */)arg1;
- (void)setEndpointFoundHandler:(id /* block */)arg1;
- (void)setEndpointLostHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setReceiveHandler:(id /* block */)arg1;
- (void)setServiceType:(id)arg1;
- (void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4;
- (void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)subscriberStarted:(id)arg1;

@end
