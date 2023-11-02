
@interface ATXHeuristicCommuteLifeEvent : NSObject <ATXContextHeuristicProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_sendPredictedCommuteNotificationToLocation:(id)arg1 from:(id)arg2 toDate:(id)arg3 confidence:(id)arg4;
- (id)heuristicResultWithEnvironment:(id)arg1;
- (id)permanentRefreshTriggers;

@end
