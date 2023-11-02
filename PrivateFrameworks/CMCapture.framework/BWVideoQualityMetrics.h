
@interface BWVideoQualityMetrics : NSObject {
    int  _frames;
    long long  _totalLux;
}

@property (nonatomic, readonly) unsigned int qualityScoringVersion;

+ (double)_luxThreshold;
+ (double)_luxTransition;
+ (id)filterMetadata:(id)arg1;
+ (void)initialize;

- (double)_computeLuxScore;
- (double)computeQualityScore;
- (void)processMetadata:(id)arg1;
- (unsigned int)qualityScoringVersion;
- (void)reset;

@end
