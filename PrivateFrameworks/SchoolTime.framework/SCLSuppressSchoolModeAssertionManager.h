
@interface SCLSuppressSchoolModeAssertionManager : NSObject <NSXPCListenerDelegate, SCLSuppressSchoolModeAssertionClientDelegate> {
    NSMutableSet * _acquiredClients;
    NSMutableSet * _clients;
    NSXPCListener * _listener;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _stateHandle;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, retain) NSMutableSet *acquiredClients;
@property (nonatomic, retain) NSMutableSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_stateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)acquiredClients;
- (void)activate;
- (void)addObserver:(id)arg1;
- (void)clientDidAcquireAssertion:(id)arg1;
- (void)clientDidInvalidate:(id)arg1;
- (id)clients;
- (void)dealloc;
- (id)initWithTargetQueue:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)observers;
- (void)performObserverBlock:(id /* block */)arg1;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setAcquiredClients:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setTargetQueue:(id)arg1;
- (unsigned long long)stateHandle;
- (unsigned long long)status;
- (id)targetQueue;

@end
