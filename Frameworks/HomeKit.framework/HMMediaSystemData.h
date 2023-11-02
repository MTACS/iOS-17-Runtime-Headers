
@interface HMMediaSystemData : HMMediaGroup <HMEProtoBufferCoding, NSSecureCoding> {
    NSUUID * _leftDestinationIdentifier;
    NSUUID * _rightDestinationIdentifier;
}

@property (copy) NSUUID *leftDestinationIdentifier;
@property (copy) NSUUID *rightDestinationIdentifier;

+ (id)codingKey;
+ (id)defaultGroupName;
+ (id)roomNameSentinel;
+ (bool)supportsSecureCoding;
+ (id)unknownDestinationSentinel;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)destinationUniqueIdentifiers;
- (id)encodeToProtoBufferData;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRoleIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 defaultName:(bool)arg4 associatedGroupIdentifier:(id)arg5 leftDestinationIdentifier:(id)arg6 rightDestinationIdentifier:(id)arg7;
- (id)initWithProtoBufferData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leftDestinationIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)rightDestinationIdentifier;
- (void)setLeftDestinationIdentifier:(id)arg1;
- (void)setRightDestinationIdentifier:(id)arg1;

@end
