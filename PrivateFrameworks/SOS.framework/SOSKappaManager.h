
@interface SOSKappaManager : NSObject <SOSClientProtocol, SOSInternalClientProtocol> {
    NSXPCConnection * _connection;
    int  _connectionRequestNotificationToken;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (id)currentSOSStatus;
+ (bool)isKappaEnabled;
+ (long long)mapSOSFlowStateToKappaState:(long long)arg1;
+ (unsigned long long)mapServerResponseToKappaResponse:(long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)connection;
- (int)connectionRequestNotificationToken;
- (void)dealloc;
- (void)detectedAnomalyWithElectedDevice:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)didDismissClientSOSBeforeSOSCall:(long long)arg1;
- (void)didUpdateSOSStatus:(id)arg1;
- (void)dismissClientSOSWithCompletion:(id /* block */)arg1;
- (void)forceStartConnection;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (id)serialQueue;
- (void)setConnection:(id)arg1;
- (void)setConnectionRequestNotificationToken:(int)arg1;
- (void)setObservers:(id)arg1;
- (void)setSendingLocationUpdate:(bool)arg1;
- (void)triggerKappaWithCompletion:(id /* block */)arg1;
- (void)updateClientCurrentSOSButtonPressState:(id)arg1;
- (void)updateClientCurrentSOSInitiationState:(long long)arg1;
- (void)updateClientCurrentSOSInteractiveState:(long long)arg1;
- (void)updateObserversWithKappaStatus:(id)arg1;

@end
