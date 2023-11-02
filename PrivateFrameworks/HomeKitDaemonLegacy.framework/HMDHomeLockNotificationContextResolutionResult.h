
@interface HMDHomeLockNotificationContextResolutionResult : HMFObject <NSCopying, NSSecureCoding> {
    NSString * _label;
    NSUUID * _labelIdentifier;
    NSUUID * _userUUID;
}

@property (readonly, copy) NSString *label;
@property (readonly, copy) NSUUID *labelIdentifier;
@property (readonly, copy) NSUUID *userUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserUUID:(id)arg1 label:(id)arg2 labelIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)labelIdentifier;
- (id)userUUID;

@end
