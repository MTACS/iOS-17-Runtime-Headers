
@interface DMTFetchAutomatedDeviceEnrollmentStateResultObject : CATTaskResultObject {
    long long  _enrollmentState;
}

@property (nonatomic) long long enrollmentState;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)enrollmentState;
- (id)initWithCoder:(id)arg1;
- (void)setEnrollmentState:(long long)arg1;

@end
