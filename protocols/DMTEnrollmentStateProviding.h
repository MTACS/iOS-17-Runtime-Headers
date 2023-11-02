
@protocol DMTEnrollmentStateProviding <NSObject>

@required

- (NSError *)enrollmentError;
- (long long)enrollmentState;

@end
