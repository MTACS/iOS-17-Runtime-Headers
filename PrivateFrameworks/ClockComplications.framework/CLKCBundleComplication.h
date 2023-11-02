
@interface CLKCBundleComplication : CLKCComplication <NSSecureCoding> {
    NSString * _appBundleIdentifier;
    NSString * _bundleIdentifier;
    CLKComplicationDescriptor * _complicationDescriptor;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) CLKComplicationDescriptor *complicationDescriptor;

+ (id)complicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
+ (id)complicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 complicationDescriptor:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)bundleIdentifier;
- (id)complicationDescriptor;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 complicationDescriptor:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
