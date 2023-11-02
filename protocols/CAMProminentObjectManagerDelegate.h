
@protocol CAMProminentObjectManagerDelegate <NSObject>

@required

- (void)prominentObjectManager:(CAMProminentObjectManager *)arg1 didChangeCurrentMachineReadableCodeAction:(BCSAction *)arg2;
- (void)prominentObjectManager:(CAMProminentObjectManager *)arg1 didChangeCurrentObject:(id <CAMMetadataObjectResult>)arg2;
- (void)prominentObjectManagerDidChangeIsCurrentObjectExpiring:(CAMProminentObjectManager *)arg1;
- (struct CGPoint { double x1; double x2; })prominentObjectManagerPointOfInterestInNormalizedDeviceSpace:(CAMProminentObjectManager *)arg1;

@end
