
@protocol PVEffectTimedProperties

@required

- (void)addTimedPropertiesDelegate:(id <PVEffectTimedPropertiesDelegate>)arg1 userContext:(NSDictionary *)arg2;
- (bool)applyTimedPropertiesForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)hasTimedPropertiesDelegate:(id <PVEffectTimedPropertiesDelegate>)arg1;
- (bool)hasTimedPropertiesDelegates;
- (void)removeAllTimedPropertiesDelegates;
- (void)removeTimedPropertiesDelegate:(id <PVEffectTimedPropertiesDelegate>)arg1;
- (NSSet *)timedPropertiesDelegates;
- (NSDictionary *)userContextForTimedPropertiesDelegate:(id <PVEffectTimedPropertiesDelegate>)arg1;

@end
