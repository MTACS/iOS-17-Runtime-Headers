
@interface ADDisparityToDepthLRUParameters : NSObject {
    unsigned long long  _capacity;
    float  _threshold;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) float threshold;

- (unsigned long long)capacity;
- (id)init;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setThreshold:(float)arg1;
- (float)threshold;

@end
