
@interface AEAssessmentState : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _configurationsByApplicationDescriptor;
    bool  _enabled;
    AEAssessmentIndividualConfiguration * _mainIndividualConfiguration;
}

@property (nonatomic, copy) NSDictionary *configurationsByApplicationDescriptor;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) AEAssessmentIndividualConfiguration *mainIndividualConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationsByApplicationDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mainIndividualConfiguration;
- (void)setConfigurationsByApplicationDescriptor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMainIndividualConfiguration:(id)arg1;

@end
