
@protocol CRKCourseEnrollmentControllerObserver <NSObject>

@optional

- (void)enrollmentController:(CRKCourseEnrollmentController *)arg1 invitationWithIdentifierDidFail:(NSString *)arg2 localizedReason:(NSString *)arg3;
- (void)enrollmentControllerDidUpdateActiveCourses:(CRKCourseEnrollmentController *)arg1;
- (void)enrollmentControllerDidUpdateCourses:(CRKCourseEnrollmentController *)arg1;
- (void)enrollmentControllerDidUpdateInvitations:(CRKCourseEnrollmentController *)arg1;
- (void)enrollmentControllerDidUpdateSettingsUIVisibility:(CRKCourseEnrollmentController *)arg1;

@end
