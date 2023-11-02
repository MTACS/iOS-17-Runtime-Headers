
@interface WFToggleAccessibilityContextualAction : WFContextualAction {
    unsigned long long  _setting;
}

@property (nonatomic, readonly) unsigned long long setting;

+ (bool)supportsSecureCoding;

- (id)associatedSettingsPreference;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetting:(unsigned long long)arg1;
- (unsigned long long)setting;
- (id)settingBiomeStreamIdentifier;

@end
