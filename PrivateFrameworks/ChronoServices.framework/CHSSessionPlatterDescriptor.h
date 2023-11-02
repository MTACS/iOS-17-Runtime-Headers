
@interface CHSSessionPlatterDescriptor : CHSBaseDescriptor <NSMutableCopying, NSSecureCoding> {
    NSData * _activityAttributesType;
}

@property (nonatomic, readonly, copy) NSData *activityAttributesType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDescriptor:(id)arg1;
- (id)activityAttributesType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 supportedFamilies:(unsigned long long)arg3 activityAttributesType:(id)arg4;
- (id)initWithExtensionIdentity:(id)arg1 supportedFamilies:(unsigned long long)arg2 activityAttributesType:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)widgetForFamily:(long long)arg1 activityIdentifier:(id)arg2;

@end
