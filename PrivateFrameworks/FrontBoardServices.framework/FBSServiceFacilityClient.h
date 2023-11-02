
@interface FBSServiceFacilityClient : NSObject <BSInvalidatable, FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    id  _configOnly_interfaceTarget;
    bool  _configured;
    BSServiceConnectionEndpoint * _endpoint;
    NSString * _facilityID;
    BSServiceInterface * _interface;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_activated;
    BSServiceConnection * _lock_connection;
    bool  _lock_connectionDenied;
    bool  _lock_invalidated;
    BSServiceQuality * _serviceQuality;
    bool  _uisHack;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (getter=isConfigured, nonatomic, readonly) bool configured;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) BSServiceQuality *serviceQuality;
@property (readonly) Class superclass;

+ (id)defaultShellEndpoint;

- (void).cxx_destruct;
- (bool)_isValid;
- (void)_lock_activate;
- (void)_lock_invalidate;
- (void)_queue_handleError:(id)arg1;
- (void)_queue_handleMessage:(id)arg1;
- (void)activate;
- (id)calloutQueue;
- (void)configureConnectMessage:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleError:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)identifier;
- (id)init;
- (id)initWithConfigurator:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;
- (void)invalidate;
- (bool)isConfigured;
- (void)sendMessage:(id)arg1 withType:(long long)arg2;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(id /* block */)arg3 waitForReply:(bool)arg4 timeout:(double)arg5;
- (id)serviceQuality;
- (void)setCalloutQueue:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setServiceQuality:(id)arg1;

@end
