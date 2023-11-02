
@interface CRKSetRequestingUnenrollmentFromControlGroupRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _groupIdentifier;
    bool  _requestingUnenroll;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic) bool requestingUnenroll;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)requestingUnenroll;
- (void)setGroupIdentifier:(id)arg1;
- (void)setRequestingUnenroll:(bool)arg1;

@end
