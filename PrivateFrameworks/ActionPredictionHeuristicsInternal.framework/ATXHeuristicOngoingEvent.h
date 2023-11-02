
@interface ATXHeuristicOngoingEvent : NSObject <ATXContextHeuristicProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)heuristicResultWithEnvironment:(id)arg1;
- (id)permanentRefreshTriggers;

@end
