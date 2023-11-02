
@interface BWAdaptiveBracketingFrameParameters : NSObject {
    float  _gain;
    int  _integrationTimeInMicroseconds;
    int  _maxAGC;
}

@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) int integrationTimeInMiroseconds;
@property (nonatomic, readonly) double integrationTimeInSeconds;
@property (nonatomic, readonly) int maxAGC;

+ (id)frameParametersWithIntegrationTimeInMicroseconds:(int)arg1 gain:(float)arg2 maxAGC:(int)arg3;
+ (id)frameParametersWithIntegrationTimeInSeconds:(double)arg1 gain:(float)arg2 maxAGC:(int)arg3;

- (float)gain;
- (int)integrationTimeInMiroseconds;
- (double)integrationTimeInSeconds;
- (int)maxAGC;

@end
