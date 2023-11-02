
@interface RedEyeFace : NSObject {
    float  _areaMax;
    float  _faceOrientation;
    CIVector * _faceRect;
    int  _imageOrientation;
    float  _junkiness;
    VNFaceLandmarks2D * _landmarks;
    VNFaceObservation * _observation;
    CIVector * _pupilLeft;
    CIVector * _pupilRight;
    CIVector * _roiRenderOriginLeft;
    CIVector * _roiRenderOriginRight;
    CIVector * _roiRenderSize;
    CIImage * _segmentationIris;
    CIImage * _segmentationSclera;
    CIImage * _segmentationSkin;
    NSArray * _uvLeft;
    NSArray * _uvRight;
}

@property (nonatomic) float areaMax;
@property (nonatomic) float faceOrientation;
@property (nonatomic, retain) CIVector *faceRect;
@property (nonatomic) int imageOrientation;
@property (nonatomic) float junkiness;
@property (nonatomic, retain) VNFaceLandmarks2D *landmarks;
@property (nonatomic, retain) VNFaceObservation *observation;
@property (nonatomic, retain) CIVector *pupilLeft;
@property (nonatomic, retain) CIVector *pupilRight;
@property (nonatomic, retain) CIVector *roiRenderOriginLeft;
@property (nonatomic, retain) CIVector *roiRenderOriginRight;
@property (nonatomic, retain) CIVector *roiRenderSize;
@property (nonatomic, retain) CIImage *segmentationIris;
@property (nonatomic, retain) CIImage *segmentationSclera;
@property (nonatomic, retain) CIImage *segmentationSkin;
@property (nonatomic, retain) NSArray *uvLeft;
@property (nonatomic, retain) NSArray *uvRight;

- (float)areaMax;
- (void)dealloc;
- (float)faceOrientation;
- (id)faceRect;
- (int)imageOrientation;
- (id)init;
- (float)junkiness;
- (id)landmarks;
- (id)observation;
- (id)pupilLeft;
- (id)pupilRight;
- (id)roiRenderOriginLeft;
- (id)roiRenderOriginRight;
- (id)roiRenderSize;
- (id)segmentationIris;
- (id)segmentationSclera;
- (id)segmentationSkin;
- (void)setAreaMax:(float)arg1;
- (void)setFaceOrientation:(float)arg1;
- (void)setFaceRect:(id)arg1;
- (void)setImageOrientation:(int)arg1;
- (void)setJunkiness:(float)arg1;
- (void)setLandmarks:(id)arg1;
- (void)setObservation:(id)arg1;
- (void)setPupilLeft:(id)arg1;
- (void)setPupilRight:(id)arg1;
- (void)setRoiRenderOriginLeft:(id)arg1;
- (void)setRoiRenderOriginRight:(id)arg1;
- (void)setRoiRenderSize:(id)arg1;
- (void)setSegmentationIris:(id)arg1;
- (void)setSegmentationSclera:(id)arg1;
- (void)setSegmentationSkin:(id)arg1;
- (void)setUvLeft:(id)arg1;
- (void)setUvRight:(id)arg1;
- (id)uvLeft;
- (id)uvRight;

@end
