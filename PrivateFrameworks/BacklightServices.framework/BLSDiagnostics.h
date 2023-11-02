
@interface BLSDiagnostics : NSObject <BLSDiagnosticFlipbookFrameSurfaceProvider, BLSFlipbookDiagnosticsProviding, BSInvalidatable> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    BSServiceConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allFlipbookFrames;
- (id)frameOnGlassNow;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (id)frameWithUUID:(id)arg1;
- (id)init;
- (void)invalidate;
- (struct __IOSurface { }*)rawSurfaceForFrame:(id)arg1;
- (struct __IOSurface { }*)surfaceForFrame:(id)arg1;

@end
