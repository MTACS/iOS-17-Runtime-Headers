
@interface _CDInteractionAdviceEngine : NSObject <_CDInteractionAdvising> {
    _CDQueryInteractionAdvisor * _queryAdvisor;
    _CDSocialInteractionAdvisor * _socialAdvisor;
    _CDInteractionStore * _store;
    _CDTemporalInteractionAdvisor * _temporalAdvisor;
}

@property (nonatomic, readonly) _CDSocialInteractionAdvisor *socialAdvisor;
@property (nonatomic, readonly) _CDTemporalInteractionAdvisor *temporalAdvisor;

+ (id)interactionAdviceEngineWithStore:(id)arg1;

- (void).cxx_destruct;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsUsingSettings:(id)arg1;
- (id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)initWithStore:(id)arg1;
- (id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2;
- (id)socialAdvisor;
- (id)temporalAdvisor;
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;

@end
