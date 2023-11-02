
@protocol CRKSettingsPaneInfoProvider <NSObject>

@required

- (NSSet *)acceptedInvitationIdentifiers;
- (NSSet *)activeInstructors;
- (NSArray *)courseInvitations;
- (NSArray *)courses;
- (void)disconnectInstructorWithIdentifier:(NSString *)arg1 forCourse:(CRKCourse *)arg2;
- (NSSet *)instructorUsersForCourse:(CRKCourse *)arg1;
- (bool)isCourseActive:(CRKCourse *)arg1;
- (bool)isInstructorWithIdentifier:(NSString *)arg1 activeForCourse:(CRKCourse *)arg2;
- (bool)isInstructorWithIdentifier:(NSString *)arg1 disconnectableForCourse:(CRKCourse *)arg2;
- (bool)isInstructorWithIdentifier:(NSString *)arg1 observingStudentScreenForCourse:(CRKCourse *)arg2;
- (bool)isStudentScreenBeingObservedForCourse:(CRKCourse *)arg1;
- (NSDictionary *)observingInstructorIdentifiersByCourseIdentifiers;
- (bool)supportsRemoteLearning;

@end
