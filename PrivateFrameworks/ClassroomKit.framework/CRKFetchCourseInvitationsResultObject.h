
@interface CRKFetchCourseInvitationsResultObject : CATTaskResultObject {
    NSSet * _acceptedInvitationIdentifiers;
    NSArray * _courseInvitations;
}

@property (nonatomic, copy) NSSet *acceptedInvitationIdentifiers;
@property (nonatomic, retain) NSArray *courseInvitations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptedInvitationIdentifiers;
- (id)courseInvitations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAcceptedInvitationIdentifiers:(id)arg1;
- (void)setCourseInvitations:(id)arg1;

@end
