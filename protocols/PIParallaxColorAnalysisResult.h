
@protocol PIParallaxColorAnalysisResult <NURenderResult>

@required

- (NSArray *)dominantColors;
- (double)medianLuminance;

@end
