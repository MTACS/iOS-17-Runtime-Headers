
@interface REMMembership : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _groupIdentifier;
    bool  _isObsolete;
    NSUUID * _memberIdentifier;
    NSDate * _modifiedOn;
}

@property (nonatomic, readonly) NSUUID *groupIdentifier;
@property (nonatomic, readonly) bool isObsolete;
@property (nonatomic, readonly) NSUUID *memberIdentifier;
@property (nonatomic, readonly) NSDate *modifiedOn;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithMemberIdentifier:(id)arg1 groupIdentifier:(id)arg2 isObsolete:(bool)arg3 modifiedOn:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isObsolete;
- (id)memberIdentifier;
- (id)modifiedOn;

@end
