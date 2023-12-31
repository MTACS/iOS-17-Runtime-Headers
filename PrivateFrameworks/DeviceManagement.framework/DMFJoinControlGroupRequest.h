
@interface DMFJoinControlGroupRequest : DMFTaskRequest {
    NSDate * _expirationDate;
    DMFControlGroupIdentifier * _groupIdentifier;
    NSArray * _leaderIdentifiers;
}

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic, copy) NSArray *leaderIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)leaderIdentifiers;
- (void)setExpirationDate:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setLeaderIdentifiers:(id)arg1;

@end
