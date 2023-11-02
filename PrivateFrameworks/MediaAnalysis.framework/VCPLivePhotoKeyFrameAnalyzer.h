
@interface VCPLivePhotoKeyFrameAnalyzer : NSObject {
    char * _faceHeatMap;
    int  _height;
    bool  _ignoreFace;
    int  _numOfFrames;
    bool  _petsDominant;
    float  _photoSharpness;
    bool  _photoSharpnessReliable;
    int  _width;
}

- (int)analyzeLivePhotoKeyFrame:(id)arg1 irisPhotoOffsetSec:(float)arg2 originalIrisPhotoOffsetSec:(float)arg3 photoTextureScore:(float)arg4 hadFlash:(bool)arg5 cancel:(id /* block */)arg6;
- (float)computeOverallFaceQualityScore:(id)arg1;
- (float)computeScoreForPhoto:(float)arg1 withRefKeyFrame:(id)arg2;
- (void)createFaceHeatMap:(id)arg1 imageFaces:(id)arg2;
- (void)dealloc;
- (void)fetchAndComputeScoreForKeyFrame:(id)arg1 withResult:(id)arg2;
- (float)getFaceHeat:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (int)reportLivePhotoKeyFrameAnalysisResults:(bool)arg1 selectedKeyFrame:(id)arg2 originalStillKeyFrame:(id)arg3 stillScore:(float)arg4 stillFQScore:(float)arg5 stillTimestamp:(float)arg6 useSemanticOnly:(bool)arg7 isKeyFrameSuggested:(bool)arg8;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })selectKeyFrameRangeWithMotion:(id)arg1 stillTimestamp:(float)arg2 isMetaMotion:(bool)arg3;
- (void)updateFaceHeatMap:(id)arg1;

@end
