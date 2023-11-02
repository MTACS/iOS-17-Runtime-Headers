
@interface AXMCoreMotionNode : AXMSourceNode {
    double  _lastSampleTime;
    unsigned long long  _samplesPerSecond;
}

@property (nonatomic) double lastSampleTime;
@property (nonatomic) unsigned long long samplesPerSecond;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (double)lastSampleTime;
- (void)nodeInitialize;
- (unsigned long long)samplesPerSecond;
- (void)setLastSampleTime:(double)arg1;
- (void)setSamplesPerSecond:(unsigned long long)arg1;
- (void)triggerWithCoreMotionManager:(id)arg1 deviceOrientation:(long long)arg2 cacheKey:(id)arg3 resultHandler:(id /* block */)arg4;

@end
