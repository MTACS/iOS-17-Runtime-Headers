
@interface BLSHDiagnosticsHostPeer : NSObject <BLSDiagnosticsXPCHostInterface, BSInvalidatable> {
    bool  _clientIsTaskScheduled;
    int  _clientPid;
    unsigned long long  _entitlements;
    <BLSFlipbookDiagnosticsProviding> * _flipbookDiagnosticsProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSDiagnosticFlipbookFrame * _lock_cachedFrameOnGlassNow;
    BLSDiagnosticFlipbookFrame * _lock_cachedLastCancelledFrame;
    RBSProcessMonitor * _processMonitor;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lock_validateHostFrame:(id)arg1 source:(id)arg2;
- (id)allFlipbookFrames;
- (void)dealloc;
- (id)description;
- (id)frameOnGlassNow;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (void)genericSurfaceForFrameUUID:(id)arg1 reply:(id /* block */)arg2 name:(id)arg3 surfaceFromFrame:(id /* block */)arg4;
- (id)hostFrameForUUID:(id)arg1;
- (id)initWithFlipbookDiagnosticsProvider:(id)arg1 peer:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (void)rawSurfaceForFrameUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)surfaceForFrameUUID:(id)arg1 reply:(id /* block */)arg2;

@end
