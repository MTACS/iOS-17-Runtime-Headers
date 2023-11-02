
@interface ATXHeuristicGoodMorning : NSObject <ATXContextHeuristicProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contextDateInterval;
+ (id)nextDateWithHour:(unsigned long long)arg1;

- (void)_addRefreshTimeTriggerWithHour:(unsigned long long)arg1 refreshTriggers:(id)arg2;
- (id)heuristicResultWithEnvironment:(id)arg1;
- (id)permanentRefreshTriggers;

@end
