
@interface SFExperimentTriggeredFeedback : SFFeedback {
    NSUUID * _codepathId;
    SFCounterfactualInfo * _counterfactual;
}

@property (nonatomic, retain) NSUUID *codepathId;
@property (nonatomic, retain) SFCounterfactualInfo *counterfactual;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codepathId;
- (id)counterfactual;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCfDiffered:(bool)arg1 cfUsed:(bool)arg2 cfError:(unsigned long long)arg3;
- (id)initWithCodepathId:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCodepathId:(id)arg1;
- (void)setCounterfactual:(id)arg1;

@end
