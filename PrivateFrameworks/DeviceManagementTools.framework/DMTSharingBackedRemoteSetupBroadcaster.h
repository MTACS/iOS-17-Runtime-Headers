
@interface DMTSharingBackedRemoteSetupBroadcaster : NSObject <CATSharingBroadcastTerminalDelegate, DMTRemoteSetupBroadcasting> {
    CATOperationQueue * _delegateQueue;
    NSString * _displayedPin;
    bool  _isBroadcasting;
    bool  _isInvalidated;
    id /* block */  _pairedTransportHandler;
    id /* block */  _showErrorHandler;
    id /* block */  _showPinHandler;
    CATSharingBroadcastTerminal * _terminal;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CATOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayedPin;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBroadcasting;
@property (nonatomic) bool isInvalidated;
@property (nonatomic, copy) id /* block */ pairedTransportHandler;
@property (nonatomic, copy) id /* block */ showErrorHandler;
@property (nonatomic, copy) id /* block */ showPinHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATSharingBroadcastTerminal *terminal;

- (void).cxx_destruct;
- (void)beginObservingTerminal;
- (void)broadcastTerminal:(id)arg1 didActivateWithError:(id)arg2;
- (void)broadcastTerminal:(id)arg1 hasError:(id)arg2;
- (void)broadcastTerminal:(id)arg1 hasPairedDeviceConnection:(id)arg2;
- (void)broadcastTerminal:(id)arg1 needsToDisplayPin:(id)arg2;
- (void)broadcastTerminal:(id)arg1 stoppedWithError:(id)arg2;
- (void)broadcastTerminalNeedsToDismissPin:(id)arg1;
- (void)dealloc;
- (id)delegateQueue;
- (id)displayedPin;
- (void)endObservingTerminal;
- (id)initWithPrimitives:(id)arg1;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (bool)isBroadcasting;
- (bool)isInvalidated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)pairedTransportHandler;
- (void)setDisplayedPin:(id)arg1;
- (void)setIsBroadcasting:(bool)arg1;
- (void)setIsInvalidated:(bool)arg1;
- (void)setPairedTransportHandler:(id /* block */)arg1;
- (void)setShowErrorHandler:(id /* block */)arg1;
- (void)setShowPinHandler:(id /* block */)arg1;
- (id /* block */)showErrorHandler;
- (id /* block */)showPinHandler;
- (void)startBroadcasting;
- (id)terminal;

@end
