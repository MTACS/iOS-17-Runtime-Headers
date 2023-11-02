
@interface REMMemberships : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _membershipByMemberIdentifier;
}

@property (nonatomic, readonly) NSDictionary *membershipByMemberIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludingObsoleteAndModifiedEarlierThan:(id)arg1;
- (id)groupIdentifierOfMemberWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMembershipByMemberIdentifier:(id)arg1;
- (id)initWithMemberships:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)membershipByMemberIdentifier;
- (id)mergingWith:(id)arg1 mergePolicy:(unsigned long long)arg2;

@end
