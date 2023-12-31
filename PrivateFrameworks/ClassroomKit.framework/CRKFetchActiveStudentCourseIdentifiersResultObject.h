
@interface CRKFetchActiveStudentCourseIdentifiersResultObject : CATTaskResultObject {
    NSArray * _activeCourseIdentifiers;
    NSArray * _activeInstructorIdentifiers;
}

@property (nonatomic, copy) NSArray *activeCourseIdentifiers;
@property (nonatomic, copy) NSArray *activeInstructorIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeCourseIdentifiers;
- (id)activeInstructorIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActiveCourseIdentifiers:(id)arg1;
- (void)setActiveInstructorIdentifiers:(id)arg1;

@end
