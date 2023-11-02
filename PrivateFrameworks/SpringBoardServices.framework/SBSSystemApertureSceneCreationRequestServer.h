
@interface SBSSystemApertureSceneCreationRequestServer : NSObject <BSServiceConnectionListenerDelegate, SBSSystemApertureSceneCreationRequestInterface> {
    BSServiceConnectionListener * _connectionListener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionsLock;
    NSMutableSet * _connectionsLock_connections;
    <SBSSystemApertureSceneCreationRequestServerDelegate> * _delegate;
    bool  _isAvailable;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSSystemApertureSceneCreationRequestServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activeInstance;
+ (id)identifier;
+ (id)interface;
+ (id)serviceQuality;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)requestSystemApertureSceneForCurrentProcess;
- (oneway void)requestSystemApertureSceneWithRequestIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startServer;

@end
