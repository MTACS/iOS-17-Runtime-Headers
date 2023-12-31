
@interface CRKFetchConfigurationTypeResultObject : CATTaskResultObject {
    unsigned long long  _configurationType;
}

@property (nonatomic) unsigned long long configurationType;

+ (bool)supportsSecureCoding;

- (unsigned long long)configurationType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConfigurationType:(unsigned long long)arg1;

@end
