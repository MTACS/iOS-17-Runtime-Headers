
@protocol PSUIFaceIDEnrollmentCoordinatorDelegate <NSObject>

@required

- (void)faceIDEnrollmentCoordinator:(PSUIFaceIDEnrollmentCoordinator *)arg1 finishedEnrollmentWithError:(NSError *)arg2;
- (void)faceIDEnrollmentCoordinatorDidDismiss:(PSUIFaceIDEnrollmentCoordinator *)arg1;
- (bool)faceIDEnrollmentCoordinatorShouldPresentInModalSheet:(PSUIFaceIDEnrollmentCoordinator *)arg1;
- (void)faceIDEnrollmentCoordinatorWillDismiss:(PSUIFaceIDEnrollmentCoordinator *)arg1;

@end
