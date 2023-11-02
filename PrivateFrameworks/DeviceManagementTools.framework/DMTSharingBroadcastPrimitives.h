
@interface DMTSharingBroadcastPrimitives : NSObject <CATSharingBroadcastPrimitives> {
    bool  _activated;
    NSObject<OS_dispatch_queue> * _broadcastCallbackQueue;
    id /* block */  _dismissPinHandler;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
    id /* block */  _messageReceivedHandler;
    bool  _paired;
    NSMutableArray * _receivedObjectQueue;
    CATSharingDevice * _remoteDevice;
    id /* block */  _sessionPairedHandler;
    SFService * _sharingService;
    id /* block */  _showPinHandler;
}

@property (getter=isActivated, nonatomic) bool activated;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *broadcastCallbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ dismissPinHandler;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ messageReceivedHandler;
@property (getter=isPaired, nonatomic) bool paired;
@property (nonatomic, readonly) NSMutableArray *receivedObjectQueue;
@property (nonatomic, retain) CATSharingDevice *remoteDevice;
@property (copy) id /* block */ sessionPairedHandler;
@property (nonatomic, readonly) SFService *sharingService;
@property (copy) id /* block */ showPinHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)addDependencyHandlers;
- (id)broadcastCallbackQueue;
- (void)deactivate;
- (id /* block */)dismissPinHandler;
- (id)initWithLoggingIdentifier:(id)arg1;
- (void)invalidateWithError:(id)arg1;
- (id /* block */)invalidationHandler;
- (bool)isActivated;
- (bool)isInvalidated;
- (bool)isPaired;
- (id /* block */)messageReceivedHandler;
- (id)receivedObjectQueue;
- (id)remoteDevice;
- (void)removeDependencyHandlers:(bool)arg1;
- (void)sendMessageToPairedDevice:(id)arg1;
- (void)serviceReceivedObjectQueue;
- (id /* block */)sessionPairedHandler;
- (void)setActivated:(bool)arg1;
- (void)setDismissPinHandler:(id /* block */)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMessageReceivedHandler:(id /* block */)arg1;
- (void)setPaired:(bool)arg1;
- (void)setRemoteDevice:(id)arg1;
- (void)setSessionPairedHandler:(id /* block */)arg1;
- (void)setShowPinHandler:(id /* block */)arg1;
- (id)sharingService;
- (id /* block */)showPinHandler;
- (void)updateRemoteDeviceWithSession:(id)arg1;

@end
