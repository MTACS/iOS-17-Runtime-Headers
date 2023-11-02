
@interface SBPressSequenceSettings : NSObject {
    unsigned long long  _indexOfPressDownToUseForVarianceAndGrowth;
    unsigned long long  _indexOfPressUpToUseForVarianceAndGrowth;
    double  _maxDefaultPressDownDuration;
    double  _maxDefaultPressUpDuration;
    double  _maxDownToDownDuration;
    unsigned long long  _numberOfPressDownGrowthTerms;
    unsigned long long  _numberOfPressUpGrowthTerms;
    unsigned long long  _numberOfPresses;
    double  _pressDownVariance;
    double  _pressUpVariance;
}

@property (nonatomic) unsigned long long indexOfPressDownToUseForVarianceAndGrowth;
@property (nonatomic) unsigned long long indexOfPressUpToUseForVarianceAndGrowth;
@property (nonatomic) double maxDefaultPressDownDuration;
@property (nonatomic) double maxDefaultPressUpDuration;
@property (nonatomic) double maxDownToDownDuration;
@property (nonatomic) unsigned long long numberOfPressDownGrowthTerms;
@property (nonatomic) unsigned long long numberOfPressUpGrowthTerms;
@property (nonatomic) unsigned long long numberOfPresses;
@property (nonatomic) double pressDownVariance;
@property (nonatomic) double pressUpVariance;

- (unsigned long long)indexOfPressDownToUseForVarianceAndGrowth;
- (unsigned long long)indexOfPressUpToUseForVarianceAndGrowth;
- (double)maxDefaultPressDownDuration;
- (double)maxDefaultPressUpDuration;
- (double)maxDownToDownDuration;
- (unsigned long long)numberOfPressDownGrowthTerms;
- (unsigned long long)numberOfPressUpGrowthTerms;
- (unsigned long long)numberOfPresses;
- (double)pressDownVariance;
- (double)pressUpVariance;
- (void)setIndexOfPressDownToUseForVarianceAndGrowth:(unsigned long long)arg1;
- (void)setIndexOfPressUpToUseForVarianceAndGrowth:(unsigned long long)arg1;
- (void)setMaxDefaultPressDownDuration:(double)arg1;
- (void)setMaxDefaultPressUpDuration:(double)arg1;
- (void)setMaxDownToDownDuration:(double)arg1;
- (void)setNumberOfPressDownGrowthTerms:(unsigned long long)arg1;
- (void)setNumberOfPressUpGrowthTerms:(unsigned long long)arg1;
- (void)setNumberOfPresses:(unsigned long long)arg1;
- (void)setPressDownVariance:(double)arg1;
- (void)setPressUpVariance:(double)arg1;

@end
