
@interface HDSPEnvironmentContext : NSObject <BSDescriptionProviding> {
    HDSPSleepScheduleModelChangeEvaluation * _changeEvaluation;
    <HDSPSource> * _source;
}

@property (nonatomic, readonly) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPSource> *source;
@property (readonly) Class superclass;

+ (id)contextWithSource:(id)arg1;

- (void).cxx_destruct;
- (id)changeEvaluation;
- (id)contextByApplyingChangeEvaluation:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithSource:(id)arg1 changeEvaluation:(id)arg2;
- (id)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
