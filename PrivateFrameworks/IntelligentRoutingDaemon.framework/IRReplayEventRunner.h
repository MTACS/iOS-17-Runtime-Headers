
@interface IRReplayEventRunner : NSObject {
    IRContextInspection * _contextsInspection;
    IRCandidateWrapperOrderOfExection * _orderOfExecution;
    IRPolicyEngine * _policyEngine;
}

@property (nonatomic, readonly, copy) NSDictionary *contexts;
@property (nonatomic, readonly, copy) IRContextInspection *contextsInspection;
@property (nonatomic, readonly, copy) IRCandidateWrapperOrderOfExection *orderOfExecution;

+ (id)historyEventsContainerDO:(id)arg1 RemovingEventsAfter:(id)arg2;

- (void).cxx_destruct;
- (id)contexts;
- (id)contextsInspection;
- (id)initWithServicePackage:(long long)arg1;
- (id)orderOfExecution;
- (void)runSingleReplayEvent:(id)arg1 withHistoryEventsContainer:(id)arg2;

@end
