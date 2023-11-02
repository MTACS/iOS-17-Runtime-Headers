
@interface PGMeaningThresholds : NSObject {
    void highPrecisionThreshold;
    void highRecallThreshold;
}

@property (nonatomic, readonly) double highPrecisionThreshold;
@property (nonatomic, readonly) double highRecallThreshold;

- (double)highPrecisionThreshold;
- (double)highRecallThreshold;
- (id)init;

@end
