
@interface ASVTextureConversionEstimate : ASVTextureDescription {
    long long  _converterType;
    struct { 
        unsigned long long footprint; 
        unsigned long long peak; 
    }  _estimatedMemoryDelta;
}

@property (nonatomic) long long converterType;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } estimatedMemoryDelta;
@property (nonatomic, readonly) unsigned long long weight;

+ (id)conversionEstimatesFromTextureDescriptions:(void *)arg1 toFitAvailableMemory:(void *)arg2 withConverters:(void *)arg3 preferredMaxTextureSize:(void *)arg4 outcome:(void *)arg5; // needs 5 arg types, found 4: id, unsigned long long, id, long long*
+ (id)conversionEstimatesSortedByPeakMemoryUsage:(id)arg1;
+ (id)heaviestConversionEstimate:(void *)arg1 withMinimumDestinationSize:(void *)arg2; // needs 2 arg types, found 1: id
+ (unsigned long long)peakMemoryForConversionEstimates:(id)arg1;
+ (id)textureDescription:(void *)arg1 downsampledToTryAndFitDestinationWithinSize:(void *)arg2; // needs 2 arg types, found 1: id

- (long long)converterType;
- (id)debugDescription;
- (struct { unsigned long long x1; unsigned long long x2; })estimatedMemoryDelta;
- (id)initWithTextureDescription:(id)arg1 converter:(id)arg2;
- (unsigned long long)peakMemoryUsage;
- (void)setConverterType:(long long)arg1;
- (void)setEstimatedMemoryDelta:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateFromConverter:(id)arg1;
- (unsigned long long)weight;

@end
