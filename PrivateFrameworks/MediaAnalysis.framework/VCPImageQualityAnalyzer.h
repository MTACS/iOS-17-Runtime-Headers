
@interface VCPImageQualityAnalyzer : NSObject {
    float  _qualityScore;
}

@property (readonly) float qualityScore;

- (int)analyzeImageQuality:(id)arg1 irisPhotoOffsetSec:(float)arg2 cancel:(id /* block */)arg3;
- (float)qualityScore;

@end
