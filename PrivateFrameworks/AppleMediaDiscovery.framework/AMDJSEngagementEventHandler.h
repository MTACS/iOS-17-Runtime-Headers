
@interface AMDJSEngagementEventHandler : NSObject

+ (id)handleAggregatedEngagementEvent:(id)arg1 forEventType:(long long)arg2 forUserId:(id)arg3 andStoreFrontId:(unsigned int)arg4 error:(id*)arg5;
+ (id)handleSingleEngagementEvent:(id)arg1 forEventType:(long long)arg2 forUserId:(id)arg3 andStoreFrontId:(unsigned int)arg4 error:(id*)arg5;
+ (unsigned int)saveLaunchEvents:(id)arg1 error:(id*)arg2;

@end
