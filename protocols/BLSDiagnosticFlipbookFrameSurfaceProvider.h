
@protocol BLSDiagnosticFlipbookFrameSurfaceProvider <NSObject>

@required

- (struct __IOSurface { }*)rawSurfaceForFrame:(BLSDiagnosticFlipbookFrame *)arg1;
- (struct __IOSurface { }*)surfaceForFrame:(BLSDiagnosticFlipbookFrame *)arg1;

@end
