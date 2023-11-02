
@protocol HDDemoDataObjectGenerator <NSObject, NSSecureCoding>

@required

- (void)generateFirstRunObjectsForDemoPerson:(HDDemoDataPerson *)arg1 firstDate:(NSDate *)arg2 objectCollection:(HDDemoDataBaseSampleGeneratorObjectCollection *)arg3;
- (void)generateObjectsForDemoPerson:(HDDemoDataPerson *)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(NSDate *)arg4 objectCollection:(HDDemoDataBaseSampleGeneratorObjectCollection *)arg5;
- (void)setDemoDataGenerationContextWithProfile:(HDProfile *)arg1 generatorState:(HDDemoDataGeneratorState *)arg2;

@end
