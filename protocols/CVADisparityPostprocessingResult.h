
@protocol CVADisparityPostprocessingResult <NSObject>

@required

- (float)backgroundDisparityRatio;
- (float)backgroundDisparitySum;
- (float)backgroundDisparitySumVariance;
- (float)backgroundSeparationLikelihood;
- (float)closeCanonicalDisparityAverage;
- (float)deltaCanonicalDisparity;
- (float)erodedForegroundRatio;
- (NSArray *)faceCanonicalDisparityAverage;
- (NSArray *)faceInvalidDisparityRatio;
- (float)focusDisparity;
- (float)foregroundRatio;
- (float)invalidDisparityRatio;
- (float)invalidDisparityRatioVariance;
- (struct __CVBuffer { }*)postprocessedDisparityPixelBuffer;

@end
