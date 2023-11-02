
@interface DESSeparatedDPParameters : NSObject {
    double  _maxNorm;
    long long  _normBinCount;
}

@property (nonatomic, readonly) double maxNorm;
@property (nonatomic, readonly) long long normBinCount;

- (id)description;
- (id)initWithRecipe:(id)arg1;
- (double)maxNorm;
- (long long)normBinCount;

@end
