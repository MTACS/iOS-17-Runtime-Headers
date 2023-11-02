
@interface PICurvesAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)_defaultCurveArray;
+ (id)autoValuesForBlackPoint:(double)arg1 whitePoint:(double)arg2;
+ (id)dictionariesFromPoints:(id)arg1;

- (id)computeCurvesForImageHistogram:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
