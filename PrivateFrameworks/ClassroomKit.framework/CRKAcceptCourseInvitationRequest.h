
@interface CRKAcceptCourseInvitationRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _pin;
    NSDictionary * _studentInformation;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *pin;
@property (nonatomic, copy) NSDictionary *studentInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pin;
- (void)setCourseIdentifier:(id)arg1;
- (void)setPin:(id)arg1;
- (void)setStudentInformation:(id)arg1;
- (id)studentInformation;

@end
