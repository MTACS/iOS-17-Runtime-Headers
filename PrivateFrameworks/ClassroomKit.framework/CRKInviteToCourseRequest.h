
@interface CRKInviteToCourseRequest : CATTaskRequest {
    CRKCourseInvitation * _invitation;
}

@property (nonatomic, retain) CRKCourseInvitation *invitation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)invitation;
- (void)setInvitation:(id)arg1;

@end
