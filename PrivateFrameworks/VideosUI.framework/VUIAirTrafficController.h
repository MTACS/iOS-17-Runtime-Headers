
@interface VUIAirTrafficController : NSObject <ATConnectionDelegate> {
    ATConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableSet * _observers;
}

@property (nonatomic, retain) ATConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *observers;
@property (readonly) Class superclass;

+ (id)defaultController;

- (void).cxx_destruct;
- (void)_onConnectionQueue_startObservingIfIdle;
- (void)_onConnectionQueue_stopObservingIfIdle;
- (void)addObserver:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (id)connectionQueue;
- (id)init;
- (id)observers;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setObservers:(id)arg1;

@end
