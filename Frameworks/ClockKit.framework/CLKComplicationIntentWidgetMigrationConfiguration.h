
@interface CLKComplicationIntentWidgetMigrationConfiguration : CLKComplicationWidgetMigrationConfiguration {
    NSString * _extensionBundleIdentifier;
    INIntent * _intent;
    NSString * _kind;
    NSString * _localizedDisplayName;
}

@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) INIntent *intent;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;

+ (id)intentWidgetMigrationConfigurationWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2 intent:(id)arg3 localizedDisplayName:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2 intent:(id)arg3 localizedDisplayName:(id)arg4;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)localizedDisplayName;
- (void)setIntent:(id)arg1;

@end
