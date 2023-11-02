
@interface CLKWidgetComplicationDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _extensionBundleIdentifier;
    INIntent * _intent;
    NSString * _kind;
}

@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) INIntent *intent;
@property (nonatomic, readonly, copy) NSString *kind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 intent:(id)arg4;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescriptor:(id)arg1;
- (id)kind;

@end
