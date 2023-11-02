
@interface _MLCGaussianRandomGenerator : NSObject {
    double  _mean;
    double  _scale;
    unsigned long long  _seedValue;
    bool  _seeded;
}

@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) unsigned long long seedValue;
@property (nonatomic, readonly) bool seeded;

+ (id)zeroMeanGaussianRandomGenerator;
+ (id)zeroMeanGaussianRandomGeneratorWithSeed:(unsigned long long)arg1;

- (id)initWithMean:(double)arg1 scale:(double)arg2 seeded:(bool)arg3 seedValue:(unsigned long long)arg4;
- (double)mean;
- (double)sample;
- (double)scale;
- (unsigned long long)seedValue;
- (bool)seeded;

@end
