
@interface PTSubjectRelighting : NSObject {
    struct SubjectRelightingV2FaceParams { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*origin; 
    }  _faceParams;
    NSDictionary * _plistSRL;
    <MTLComputePipelineState> * _srlV2CalcCoefficientsLivePhotos;
    <MTLBuffer> * _srlV2CoeffsBuffer;
    <MTLComputePipelineState> * _srlV2FaceHistogramLivePhotos;
    <MTLBuffer> * _srlV2FaceStatsBuffer;
    <MTLComputePipelineState> * _srlV2GlobalHistogramLivePhotos;
    <MTLBuffer> * _srlV2GlobalStatsBuffer;
    SRLv2Plist * _srlV2Plist;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 effectUtil:(id)arg2 util:(id)arg3 prewarmOnly:(bool)arg4;
- (int)runSRLForLivePhotosWithInputBuffer:(id)arg1 lumaTexture:(id)arg2 chromaTexture:(id)arg3 skinMaskTexture:(id)arg4 personMaskTexture:(id)arg5 skinToneClassification:(id)arg6 validROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 expBias:(float)arg8 faceExpRatio:(float)arg9 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg10;
- (id)samplePosDebug;
- (id)srlV2CoeffsBuffer;

@end
