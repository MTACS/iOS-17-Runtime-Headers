
@interface MGClientConnectionProvider : NSObject <MGClientConnectionProviderProtocol> {
    <MGClientConnectionProviderDelegateProtocol> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _notifyToken;
    NSXPCConnection * _serviceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MGClientConnectionProviderDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, retain) NSXPCConnection *serviceConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createServiceConnection;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueue;
- (id)init;
- (int)notifyToken;
- (id)serviceConnection;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setServiceConnection:(id)arg1;

@end
