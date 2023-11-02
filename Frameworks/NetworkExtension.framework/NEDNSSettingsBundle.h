
@interface NEDNSSettingsBundle : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _enabled;
    NSArray * _onDemandRules;
    NEDNSSettings * _settings;
}

@property (getter=isEnabled) bool enabled;
@property (copy) NSArray *onDemandRules;
@property (copy) NEDNSSettings *settings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)onDemandRules;
- (void)setEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
