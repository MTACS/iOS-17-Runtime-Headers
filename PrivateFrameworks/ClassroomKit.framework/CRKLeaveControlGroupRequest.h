
@interface CRKLeaveControlGroupRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _groupIdentifier;
    NSArray * _leaderIdentifiers;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic, copy) NSArray *leaderIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)leaderIdentifiers;
- (void)setGroupIdentifier:(id)arg1;
- (void)setLeaderIdentifiers:(id)arg1;

@end
