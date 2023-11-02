
@interface CRKFetchCoursesResultObject : CATTaskResultObject {
    NSArray * _courses;
}

@property (nonatomic, copy) NSArray *courses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCourses:(id)arg1;

@end
