
@interface IRClassificatonGenerator : NSObject {
    IRCandidateClassificationDetectorFiltered * _detectorFiltered;
    IRCandidateClassificationDetectorSameSpace * _detectorSameSpace;
    NSMutableDictionary * _internalContexts;
    NSMutableDictionary * _internalPolicyInspections;
    IRCandidateSelector * _selector;
}

@property (nonatomic, readonly) NSDictionary *contexts;
@property (nonatomic, retain) IRCandidateClassificationDetectorFiltered *detectorFiltered;
@property (nonatomic, retain) IRCandidateClassificationDetectorSameSpace *detectorSameSpace;
@property (nonatomic, retain) NSMutableDictionary *internalContexts;
@property (nonatomic, retain) NSMutableDictionary *internalPolicyInspections;
@property (nonatomic, readonly) NSDictionary *policyInspections;
@property (nonatomic, retain) IRCandidateSelector *selector;

- (void).cxx_destruct;
- (void)_fillInspectionIfNeeded:(bool)arg1 withCandidates:(id)arg2 selectedCandidate:(id)arg3 negativeInputs:(id)arg4 stateMachineClassification:(long long)arg5;
- (id)contexts;
- (id)detectorFiltered;
- (id)detectorSameSpace;
- (bool)generateClassificationsWithCandiatesContainer:(id)arg1 systemState:(id)arg2 historyEventsContainer:(id)arg3 miloPrediction:(id)arg4 nearbyDeviceContainer:(id)arg5 fillInspection:(bool)arg6 date:(id)arg7;
- (id)init;
- (id)internalContexts;
- (id)internalPolicyInspections;
- (id)policyInspections;
- (id)selector;
- (void)setDetectorFiltered:(id)arg1;
- (void)setDetectorSameSpace:(id)arg1;
- (void)setInternalContexts:(id)arg1;
- (void)setInternalPolicyInspections:(id)arg1;
- (void)setSelector:(id)arg1;

@end
