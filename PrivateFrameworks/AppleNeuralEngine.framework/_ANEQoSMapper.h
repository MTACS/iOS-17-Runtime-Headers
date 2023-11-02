
@interface _ANEQoSMapper : NSObject

+ (unsigned int)aneBackgroundTaskQoS;
+ (unsigned int)aneDefaultTaskQoS;
+ (unsigned int)aneRealTimeTaskQoS;
+ (unsigned int)aneUserInitiatedTaskQoS;
+ (unsigned int)aneUserInteractiveTaskQoS;
+ (unsigned int)aneUtilityTaskQoS;
+ (id)dispatchQueueArrayByMappingPrioritiesWithTag:(id)arg1;
+ (int)programPriorityForQoS:(unsigned int)arg1;
+ (unsigned int)qosForProgramPriority:(int)arg1;
+ (unsigned long long)queueIndexForQoS:(unsigned int)arg1;
+ (int)realTimeProgramPriority;
+ (unsigned long long)realTimeQueueIndex;

@end
