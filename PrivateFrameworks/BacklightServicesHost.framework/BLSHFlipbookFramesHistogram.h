
@interface BLSHFlipbookFramesHistogram : NSObject {
    float  _averageAPL;
    float  _averageAPLDimming;
    unsigned long long  _averageMemoryUsage;
    double  _averagePresentationTimeFromNow;
    float  _highestAPL;
    float  _highestAPLDimming;
    double  _intervalUntilFirstFrame;
    float  _lowestAPL;
    float  _lowestAPLDimming;
    float  _medianAPL;
    float  _medianAPLDimming;
    unsigned long long  _medianMemoryUsage;
    double  _medianPresentationTimeFromNow;
    unsigned long long  _memoryUsage;
    NSArray * _memoryUsageHistogram;
    double  _presentationDuration;
    NSArray * _presentationTimeHistogram;
    unsigned long long  _totalCount;
}

@property (nonatomic, readonly) float averageAPL;
@property (nonatomic, readonly) float averageAPLDimming;
@property (nonatomic, readonly) unsigned long long averageMemoryUsage;
@property (nonatomic, readonly) double averagePresentationTimeFromNow;
@property (nonatomic, readonly) unsigned int count1to2Min;
@property (nonatomic, readonly) unsigned int count2to3Min;
@property (nonatomic, readonly) unsigned int count3to4Min;
@property (nonatomic, readonly) unsigned int count4to5Min;
@property (nonatomic, readonly) unsigned int count5to6Min;
@property (nonatomic, readonly) unsigned int countLessThan1Min;
@property (nonatomic, readonly) unsigned int countMoreThan6Min;
@property (nonatomic, readonly) float highestAPL;
@property (nonatomic, readonly) float highestAPLDimming;
@property (nonatomic, readonly) double intervalUntilFirstFrame;
@property (nonatomic, readonly) float lowestAPL;
@property (nonatomic, readonly) float lowestAPLDimming;
@property (nonatomic, readonly) float medianAPL;
@property (nonatomic, readonly) float medianAPLDimming;
@property (nonatomic, readonly) unsigned long long medianMemoryUsage;
@property (nonatomic, readonly) double medianPresentationTimeFromNow;
@property (nonatomic, readonly) unsigned long long memoryUsage;
@property (nonatomic, readonly) NSArray *memoryUsageHistogram;
@property (nonatomic, readonly) double presentationDuration;
@property (nonatomic, readonly) NSArray *presentationTimeHistogram;
@property (nonatomic, readonly) unsigned long long totalCount;

+ (id)histogramWithReferenceDate:(id)arg1 flipbookFrames:(id)arg2;
+ (id)histogramWithReferenceDate:(id)arg1 iteratePresentationDatesBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (float)averageAPL;
- (float)averageAPLDimming;
- (unsigned long long)averageMemoryUsage;
- (double)averagePresentationTimeFromNow;
- (unsigned int)count1to2Min;
- (unsigned int)count2to3Min;
- (unsigned int)count3to4Min;
- (unsigned int)count4to5Min;
- (unsigned int)count5to6Min;
- (unsigned int)countLessThan1Min;
- (unsigned int)countMoreThan6Min;
- (id)description;
- (float)highestAPL;
- (float)highestAPLDimming;
- (double)intervalUntilFirstFrame;
- (float)lowestAPL;
- (float)lowestAPLDimming;
- (float)medianAPL;
- (float)medianAPLDimming;
- (unsigned long long)medianMemoryUsage;
- (double)medianPresentationTimeFromNow;
- (unsigned long long)memoryUsage;
- (id)memoryUsageHistogram;
- (double)presentationDuration;
- (id)presentationTimeHistogram;
- (unsigned long long)totalCount;

@end
