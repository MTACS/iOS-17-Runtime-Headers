
@protocol PXDiagnosticsEnvironment <NSObject>

@required

- (NSArray *)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;

@end
