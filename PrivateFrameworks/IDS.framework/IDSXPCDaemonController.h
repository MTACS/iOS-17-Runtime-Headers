
@interface IDSXPCDaemonController : NSObject {
    NSMutableDictionary * _collaboratorPromiseDictionary;
    IDSXPCConnection * _connection;
    NSMapTable * _interruptionHandlerByTarget;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _sync;
    NSMutableDictionary * _syncCollaboratorDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *collaboratorPromiseDictionary;
@property (nonatomic, retain) IDSXPCConnection *connection;
@property (nonatomic, retain) NSMapTable *interruptionHandlerByTarget;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *syncCollaboratorDictionary;

// Image: /System/Library/PrivateFrameworks/IDS.framework/IDS

+ (void)performDaemonControllerTask:(id /* block */)arg1;
+ (id)weakSharedInstance;

- (void).cxx_destruct;
- (id)_collaboratorWithIdentifier:(id)arg1 interface:(id)arg2 timeout:(double)arg3 errorHandler:(id /* block */)arg4 resolverBlock:(id /* block */)arg5;
- (id)_daemonProxyWithErrorHandler:(id /* block */)arg1;
- (id)_initWithQueue:(id)arg1 isSync:(bool)arg2;
- (id)_initWithQueue:(id)arg1 isSync:(bool)arg2 connectionCreationBlock:(id /* block */)arg3;
- (id)_sync_collaboratorWithIdentifier:(id)arg1 errorHandler:(id /* block */)arg2 resolverBlock:(id /* block */)arg3;
- (id)_timingOutDaemonProxyWithTimeout:(double)arg1 errorHandler:(id /* block */)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)activityMonitorCollaboratorWithErrorHandler:(id /* block */)arg1;
- (void)addInterruptionHandler:(id /* block */)arg1 forTarget:(id)arg2;
- (id)collaboratorPromiseDictionary;
- (id)connection;
- (void)dealloc;
- (id)firewallCollaboratorWithErrorHandler:(id /* block */)arg1;
- (id)groupSessionKeyValueDeliveryProviderCollaboratorWithErrorHandler:(id /* block */)arg1;
- (id)initSyncControllerWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 connectionCreationBlock:(id /* block */)arg2;
- (id)interalTestingCollaboratorWithErrorHandler:(id /* block */)arg1;
- (id)interruptionHandlerByTarget;
- (id)keyTransparencyCollaboratorWithErrorHandler:(id /* block */)arg1;
- (id)opportunisticCollaboratorWithErrorHandler:(id /* block */)arg1;
- (id)pairedDeviceManagerCollaboratorWithErrorHandler:(id /* block */)arg1;
- (id)pairingCollaboratorWithErrorHandler:(id /* block */)arg1;
- (id)pairingCollaboratorWithTimeout:(double)arg1 errorHandler:(id /* block */)arg2;
- (void)performTask:(id /* block */)arg1;
- (id)queue;
- (id)registrationCollaboratorWithErrorHandler:(id /* block */)arg1;
- (void)removeInterruptionHandlerForTarget:(id)arg1;
- (id)reunionSyncCollaboratorWithErrorHandler:(id /* block */)arg1;
- (id)serverMessagingCollaboratorWithErrorHandler:(id /* block */)arg1;
- (void)setCollaboratorPromiseDictionary:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setInterruptionHandlerByTarget:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSyncCollaboratorDictionary:(id)arg1;
- (id)syncCollaboratorDictionary;

// Image: /System/Library/PrivateFrameworks/BagKit.framework/BagKit

- (id)bagKitCollaboratorWithErrorHandler:(id /* block */)arg1;

@end
