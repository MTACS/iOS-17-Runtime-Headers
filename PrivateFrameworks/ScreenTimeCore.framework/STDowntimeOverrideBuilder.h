
@interface STDowntimeOverrideBuilder : NSObject

+ (id)createAutomaticOverrideWithState:(long long)arg1 schedule:(id)arg2 creationDate:(id)arg3 calendar:(id)arg4;
+ (id)createFixedDurationOverrideWithInterval:(double)arg1 state:(long long)arg2 creationDate:(id)arg3 calendar:(id)arg4;

@end
