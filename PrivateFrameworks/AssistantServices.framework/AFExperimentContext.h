
@interface AFExperimentContext : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _experimentsByConfigurationIdentifier;
}

@property (nonatomic, readonly) AFExperiment<AFExperimentForSiriVOXSounds> *experimentForSiriVOXSounds;
@property (nonatomic, readonly) AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior> *experimentForSiriVOXTapToSiriBehavior;
@property (nonatomic, readonly, copy) NSDictionary *experimentsByConfigurationIdentifier;
@property (nonatomic, readonly) AFExperiment<AFInvocationFeedbackExperiment> *invocationFeedbackExperiment;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentForSiriVOXSounds;
- (id)experimentForSiriVOXTapToSiriBehavior;
- (id)experimentsByConfigurationIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperimentsByConfigurationIdentifier:(id)arg1;
- (id)invocationFeedbackExperiment;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
