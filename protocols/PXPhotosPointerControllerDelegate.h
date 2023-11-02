
@protocol PXPhotosPointerControllerDelegate <NSObject>

@required

- (void)pointerController:(PXPhotosPointerController *)arg1 didExitRegionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (<NSCopying><NSObject> *)pointerController:(PXPhotosPointerController *)arg1 identifierForRegionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (long long)pointerController:(PXPhotosPointerController *)arg1 interactionOptionsForRegionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (PXRegionOfInterest *)pointerController:(PXPhotosPointerController *)arg1 regionOfInterestForCursorAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (UIView *)pointerController:(PXPhotosPointerController *)arg1 viewForCursorInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (void)pointerController:(PXPhotosPointerController *)arg1 willEnterRegionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;

@end
