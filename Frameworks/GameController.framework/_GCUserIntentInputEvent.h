
@interface _GCUserIntentInputEvent : NSObject {
    long long  _octant;
    double  _timestampInSeconds;
}

@property (nonatomic, readonly) long long octant;
@property (nonatomic, readonly) double timestampInSeconds;

- (id)initWithXValue:(float)arg1 yValue:(float)arg2 timestamp:(unsigned long long)arg3 deadzoneSquared:(double)arg4;
- (long long)octant;
- (double)timestampInSeconds;

@end
