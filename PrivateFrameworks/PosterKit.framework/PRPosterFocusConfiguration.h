
@interface PRPosterFocusConfiguration : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding, PRPosterRoleAttribute> {
    NSString * _activityIdentifier;
    NSUUID * _activityUUID;
}

@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (nonatomic, readonly, copy) NSUUID *activityUUID;
@property (nonatomic, readonly) NSString *attributeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decodeObjectWithJSON:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityIdentifier;
- (id)activityUUID;
- (id)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeJSON;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityIdentifier:(id)arg1 activityUUID:(id)arg2;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFocusConfiguration:(id)arg1;

@end
