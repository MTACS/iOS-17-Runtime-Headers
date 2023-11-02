
@interface SNKShotSegmentationRequest : NSObject {
    void impl;
}

@property (nonatomic) float backgroundEnergyPercentile;
@property (nonatomic, copy) NSArray *fileURLs;
@property (nonatomic) float foregroundEnergyPercentile;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } hangoverDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minSegmentDuration;
@property (nonatomic) float similarityThreshold;

- (void).cxx_destruct;
- (float)backgroundEnergyPercentile;
- (id)fileURLs;
- (float)foregroundEnergyPercentile;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })hangoverDuration;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSegmentDuration;
- (void)setBackgroundEnergyPercentile:(float)arg1;
- (void)setFileURLs:(id)arg1;
- (void)setForegroundEnergyPercentile:(float)arg1;
- (void)setHangoverDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMinSegmentDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSimilarityThreshold:(float)arg1;
- (float)similarityThreshold;

@end
