
@interface BKSTouchEventService : NSObject <BKSTouchEventClient_IPC> {
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _registrationLock;
    NSMutableDictionary * _registrationLock_registrationsByContextID;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectToService;
- (void)_repostAllRegistrations;
- (id)addAuthenticationSpecifications:(id)arg1 forReason:(id)arg2;
- (void)addTouchAuthenticationSpecifications:(id)arg1 forReason:(id)arg2;
- (id)init;
- (id)registerSceneHostSettings:(id)arg1 forCAContextID:(unsigned int)arg2;

@end
