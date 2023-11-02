
@interface PISegmentationGating : NSObject

+ (unsigned long long)gatingResultForSegmentationScores:(id)arg1;
+ (bool)isValidSegmentationScoreForDepth:(struct PISegmentationBimodalScore { float x1; float x2; float x3; })arg1;
+ (id)segmentationScoreRanges;

@end
