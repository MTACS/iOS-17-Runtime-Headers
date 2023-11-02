
@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver> {
    <NSObject> * _backgroundListener;
    NSString * _className;
    NSXPCConnection * _connection;
    PKXPCForwarder * _currentExportedProxy;
    <PKXPCServiceDelegate> * _delegate;
    NSXPCInterface * _exportedObjectInterface;
    bool  _forceConnectionOnResume;
    <PKForegroundActiveArbiter> * _foregroundActiveArbiter;
    <NSObject> * _foregroundListener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _machServiceName;
    unsigned long long  _options;
    NSXPCInterface * _remoteObjectInterface;
    <PKInvalidatable> * _serviceResumedListenerInvalidater;
    NSString * _serviceResumedNotificationName;
    bool  _suspendCallbacks;
    PKXPCForwarder * _templateExportedProxy;
}

@property (nonatomic, readonly) bool connectionEstablished;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKXPCServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceConnectionOnResume;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *machServiceName;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

+ (void)setForegroundActiveArbiter:(id)arg1;

- (void).cxx_destruct;
- (bool)connectionEstablished;
- (void)dealloc;
- (id)delegate;
- (id)existingRemoteObjectProxy;
- (id)existingRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)existingSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)forceConnectionOnResume;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 options:(unsigned long long)arg6;
- (bool)isSuspended;
- (id)machServiceName;
- (unsigned long long)options;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceConnectionOnResume:(bool)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
