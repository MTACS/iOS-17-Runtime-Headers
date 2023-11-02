
@protocol FxStreamProviding

@required

- (FxShape *)domainOfDefinitionForSample:(FxSample *)arg1;
- (double)durationForStream:(FxStream *)arg1;
- (id)evaluateSample:(FxSample *)arg1 withOptions:(NSDictionary *)arg2;
- (unsigned long long)fieldOrderForSample:(FxSample *)arg1;
- (double)frameDurationForStream:(FxStream *)arg1;
- (bool)isContextTypeSupported:(int)arg1 bySample:(FxSample *)arg2;
- (bool)isSamplePredetermined:(FxSample *)arg1;
- (bool)isStreamPremultiplied:(FxStream *)arg1;
- (double)pixelAspectForStream:(FxStream *)arg1;
- (NSArray *)requiredSamplesForSample:(FxSample *)arg1;
- (double)startTimeForStream:(FxStream *)arg1;
- (unsigned int)timeScaleForStream:(FxStream *)arg1;

@end
