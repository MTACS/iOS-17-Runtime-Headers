
@protocol IRServicePackageAdapter <IRAnalytics>

@required

- (NSDictionary *)contexts;
- (bool)outputRulesToContext:(NSDictionary *)arg1 candidatesContainer:(IRCandidatesContainerDO *)arg2 fillInspection:(bool)arg3;
- (NSDictionary *)policyInspections;
- (NSDictionary *)rules;

@optional

- (IRHistoryEventsContainerDO *)filterHistory:(IRHistoryEventsContainerDO *)arg1;
- (bool)shouldAskForLowLatencyMiLo:(IRCandidatesContainerDO *)arg1;
- (bool)shouldLabelMiLoForEvent:(IREventDO *)arg1;
- (bool)shouldRejectEvent:(IREventDO *)arg1 withHistoryEventsContainer:(IRHistoryEventsContainerDO *)arg2;

@end
