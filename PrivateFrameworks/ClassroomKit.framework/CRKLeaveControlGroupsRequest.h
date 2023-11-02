
@interface CRKLeaveControlGroupsRequest : CATTaskRequest {
    NSSet * _groupIdentifiers;
}

@property (nonatomic, retain) NSSet *groupIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifiers;
- (id)initWithCoder:(id)arg1;
- (void)setGroupIdentifiers:(id)arg1;

@end
