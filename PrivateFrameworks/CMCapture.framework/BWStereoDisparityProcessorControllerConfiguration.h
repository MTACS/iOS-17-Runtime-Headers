
@interface BWStereoDisparityProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    struct { 
        int width; 
        int height; 
    }  _disparityOutputDimensions;
    struct { 
        int width; 
        int height; 
    }  _inputDimensions;
    NSArray * _portTypesWithDepthSegmentationPortraitParameters;
    bool  _shouldComputeDisparityWhenCalibrationFails;
    int  _stillImageDepthDataType;
    bool  _zoomingDisparityAllowed;
}

@property (nonatomic) struct { int x1; int x2; } disparityOutputDimensions;
@property (nonatomic) struct { int x1; int x2; } inputDimensions;
@property (nonatomic, retain) NSArray *portTypesWithDepthSegmentationPortraitParameters;
@property (nonatomic) bool shouldComputeDisparityWhenCalibrationFails;
@property (nonatomic) int stillImageDepthDataType;
@property (nonatomic) bool zoomingDisparityAllowed;

- (void)dealloc;
- (id)description;
- (struct { int x1; int x2; })disparityOutputDimensions;
- (struct { int x1; int x2; })inputDimensions;
- (id)portTypesWithDepthSegmentationPortraitParameters;
- (void)setDisparityOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setInputDimensions:(struct { int x1; int x2; })arg1;
- (void)setPortTypesWithDepthSegmentationPortraitParameters:(id)arg1;
- (void)setShouldComputeDisparityWhenCalibrationFails:(bool)arg1;
- (void)setStillImageDepthDataType:(int)arg1;
- (void)setZoomingDisparityAllowed:(bool)arg1;
- (bool)shouldComputeDisparityWhenCalibrationFails;
- (int)stillImageDepthDataType;
- (bool)zoomingDisparityAllowed;

@end
