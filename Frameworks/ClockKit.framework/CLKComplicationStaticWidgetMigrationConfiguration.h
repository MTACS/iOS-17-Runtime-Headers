
@interface CLKComplicationStaticWidgetMigrationConfiguration : CLKComplicationWidgetMigrationConfiguration {
    NSString * _extensionBundleIdentifier;
    NSString * _kind;
}

@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *kind;

+ (id)staticWidgetMigrationConfigurationWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)kind;

@end
