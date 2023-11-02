
@interface ITIdleTimerStateClient : NSObject <ITIdleTimerClientInterface, ITIdleTimerStateRequestHandling> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    unsigned long long  _access_serviceAvailability;
    BSServiceConnection * _connection;
    <ITIdleTimerStateRequestDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_access_addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
- (void)_access_removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2;
- (void)_connectionInterrupted;
- (void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
- (bool)handleIdleEvent:(id)arg1 usingConfigurationWithIdentifier:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (bool)isIdleTimerServiceAvailable;
- (void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2;

@end
