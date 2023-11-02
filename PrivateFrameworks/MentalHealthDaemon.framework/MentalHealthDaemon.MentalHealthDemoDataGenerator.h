
@interface MentalHealthDaemon.MentalHealthDemoDataGenerator : NSObject <HDDemoDataObjectGenerator> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  calendar;
    void currentInjectionIndex;
    void generatorState;
    void nextStateOfMindSampleTime;
    void profile;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDemoDataGenerationContextWithProfile:(id)arg1 generatorState:(id)arg2;

@end
