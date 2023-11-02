
@protocol BLSDiagnosticsXPCHostInterface <NSObject>

@required

- (NSArray<__BLSDiagnosticFlipbookFrame__> *)allFlipbookFrames;
- (BLSDiagnosticFlipbookFrame *)frameOnGlassNow;
- (BLSDiagnosticFlipbookFrame *)frameOnGlassWhenFlipbookLastCancelled;
- (void)rawSurfaceForFrameUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, NSError *, void*
- (void)surfaceForFrameUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, NSError *, void*

@end
