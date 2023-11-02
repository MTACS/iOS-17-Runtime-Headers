
@interface IRServicePackageAdapterAppleTVControl : NSObject <IRServicePackageAdapter> {
    NSMutableDictionary * _internalContexts;
    IRCandidateWrapperOrderOfExection * _internalOrderOfExecution;
    NSMutableDictionary * _internalPolicyInspections;
}

@property (nonatomic, readonly) NSDictionary *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *internalContexts;
@property (nonatomic, retain) IRCandidateWrapperOrderOfExection *internalOrderOfExecution;
@property (nonatomic, retain) NSMutableDictionary *internalPolicyInspections;
@property (nonatomic, readonly) NSDictionary *policyInspections;
@property (nonatomic, readonly) NSDictionary *rules;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_autoRouteClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)_autoRoutePositiveRulesClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (void)_classifyContext:(id)arg1;
- (void)_evaluateOutputRules:(id)arg1 contextWrapper:(id)arg2;
- (id)_filteredClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)_oneTapClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)_oneTapClassificationPositiveRulesForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)_reasonsForRejectingAutoRouteOrOneTapClassificationForCandidate:(id)arg1;
- (id)_topOfListClassificationForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)_topOfListClassificationPositiveRulesForCandidate:(id)arg1 forClassificationEvaluated:(long long)arg2;
- (id)contexts;
- (id)filterHistory:(id)arg1;
- (id)init;
- (id)internalContexts;
- (id)internalOrderOfExecution;
- (id)internalPolicyInspections;
- (bool)outputRulesToContext:(id)arg1 candidatesContainer:(id)arg2 fillInspection:(bool)arg3;
- (id)policyInspections;
- (id)rules;
- (void)setInternalContexts:(id)arg1;
- (void)setInternalOrderOfExecution:(id)arg1;
- (void)setInternalPolicyInspections:(id)arg1;
- (bool)shouldAskForLowLatencyMiLo:(id)arg1;
- (bool)shouldLabelMiLoForEvent:(id)arg1;
- (bool)shouldRejectEvent:(id)arg1 withHistoryEventsContainer:(id)arg2;
- (id)uiAnalyticsWithEvent:(id)arg1 forCandidateIdentifier:(id)arg2 systemState:(id)arg3 candidatesContainer:(id)arg4 miloPrediction:(id)arg5 inspections:(id)arg6 statisticsManager:(id)arg7 service:(id)arg8;

@end
