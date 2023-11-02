
@interface MPCPolicyEvaluation : NSObject {
    bool  _canBeOverriden;
    bool  _disableVocalAttenuation;
    NSString * _explanation;
    long long  _policyType;
}

@property (nonatomic) bool canBeOverriden;
@property (getter=shouldDisableVocalAttenuation, nonatomic) bool disableVocalAttenuation;
@property (nonatomic, copy) NSString *explanation;
@property (nonatomic) long long policyType;

- (void).cxx_destruct;
- (bool)canBeOverriden;
- (id)explanation;
- (bool)isEqual:(id)arg1;
- (long long)policyType;
- (void)setCanBeOverriden:(bool)arg1;
- (void)setDisableVocalAttenuation:(bool)arg1;
- (void)setExplanation:(id)arg1;
- (void)setPolicyType:(long long)arg1;
- (bool)shouldDisableVocalAttenuation;

@end
