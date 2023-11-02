
@protocol BLSFlipbookDiagnosticsProviding <NSObject>

@required

- (NSArray *)allFlipbookFrames;
- (BLSDiagnosticFlipbookFrame *)frameOnGlassNow;
- (BLSDiagnosticFlipbookFrame *)frameOnGlassWhenFlipbookLastCancelled;
- (BLSDiagnosticFlipbookFrame *)frameWithUUID:(NSUUID *)arg1;

@end
