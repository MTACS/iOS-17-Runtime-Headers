
@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _enableManualMode;
    bool  _enabled;
    long long  _grade;
    NEPerApp * _perApp;
    NEFilterProviderConfiguration * _provider;
}

@property bool enableManualMode;
@property (getter=isEnabled) bool enabled;
@property (nonatomic) long long grade;
@property (copy) NEPerApp *perApp;
@property (copy) NEFilterProviderConfiguration *provider;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)enableManualMode;
- (void)encodeWithCoder:(id)arg1;
- (long long)grade;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)perApp;
- (id)provider;
- (void)setEnableManualMode:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGrade:(long long)arg1;
- (void)setPerApp:(id)arg1;
- (void)setProvider:(id)arg1;

@end
