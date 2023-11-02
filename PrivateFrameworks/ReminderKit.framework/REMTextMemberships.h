
@interface REMTextMemberships : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _lastResetDate;
    NSDictionary * _memberships;
}

@property (nonatomic, readonly) NSDate *lastResetDate;
@property (nonatomic, readonly) NSDictionary *memberships;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifierOfMemberWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMemberships:(id)arg1;
- (id)initWithMemberships:(id)arg1 lastResetDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastResetDate;
- (id)memberships;
- (id)mergingWith:(id)arg1;
- (void)reset;

@end
