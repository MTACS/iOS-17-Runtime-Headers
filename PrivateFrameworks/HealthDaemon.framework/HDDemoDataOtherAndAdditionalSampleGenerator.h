
@interface HDDemoDataOtherAndAdditionalSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _nextHandwashingSampleTime;
    double  _nextToothbrushingSampleTime;
    double  _nexttimeInDaylightSampleTime;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end
