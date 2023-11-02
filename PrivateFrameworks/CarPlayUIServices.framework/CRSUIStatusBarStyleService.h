
@interface CRSUIStatusBarStyleService : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate, CRSUIStatusBarStyleClientToServerInterface> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSHashTable * _connections;
    <CRSUIStatusBarStyleServiceDelegate> * _delegate;
    BSServiceConnectionListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_assertions;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, retain) NSHashTable *connections;
@property (nonatomic, readonly) long long contrast;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRSUIStatusBarStyleServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interfaceStyle;
@property (nonatomic, retain) BSServiceConnectionListener *listener;
@property (getter=isSiriPresentation, nonatomic, readonly) bool siriPresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (oneway void)clientAcquireForSiriPresentationWithFenceHandle:(id)arg1 animationSettings:(id)arg2;
- (oneway void)clientAcquireWithInterfaceStyle:(id)arg1 contrast:(id)arg2 fenceHandle:(id)arg3 animationSettings:(id)arg4;
- (oneway void)clientReliquishWithFenceHandle:(id)arg1 animationSettings:(id)arg2;
- (id)connectionQueue;
- (id)connections;
- (long long)contrast;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (long long)interfaceStyle;
- (void)invalidate;
- (bool)isSiriPresentation;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)setConnectionQueue:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;

@end
