
@interface FxSample : NSObject {
    struct FxSamplePriv { double x1; id x2; id x3; id x4; } * _priv;
}

+ (id)_requiredSamplesForSamples:(id)arg1;

- (id)context;
- (void)dealloc;
- (id)domainOfDefinition;
- (id)evaluateWithOptions:(id)arg1;
- (unsigned long long)fieldOrder;
- (id)init;
- (bool)isPredetermined;
- (id)regionOfInterest;
- (id)requiredSamples;
- (void)setContext:(id)arg1;
- (void)setRegionOfInterest:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setTime:(double)arg1;
- (id)stream;
- (bool)supportsContextType:(int)arg1;
- (double)time;

@end
