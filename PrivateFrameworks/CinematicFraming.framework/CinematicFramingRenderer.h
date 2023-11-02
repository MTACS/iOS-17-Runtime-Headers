
@interface CinematicFramingRenderer : NSObject <FramingSpaceManager> {
    float  _additionalCameraRotation;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sensorSize; 
    }  _calibrationParameters;
    int  _cameraOrientation;
    bool  _cameraOrientationCorrectionEnabled;
    <MTLCommandQueue> * _commandQueue;
    struct __CVMetalTextureCache { } * _cvMetalTextureCacheRef;
    float  _fovLimit;
    void _gravity;
    bool  _isFrontCamera;
    NSMutableDictionary * _kalmanFilterManager;
    <MTLLibrary> * _library;
    <MTLDevice> * _metalDevice;
    int  _numCCWRotationsFromInputToFramingSpace;
    CinematicFramingSessionOptions * _options;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outputROI;
    <MTLComputePipelineState> * _pipelineComputeStates;
    int  _sensorID;
    float  _stereographicFisheyeF;
    float  _stereographicFisheyeMaxStrength;
    bool  _visualizeViewport;
}

@property (nonatomic, readonly) float additionalCameraRotation;
@property (nonatomic, readonly) struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1; } calibrationParams;
@property (nonatomic) int cameraOrientation;
@property (nonatomic) bool cameraOrientationCorrectionEnabled;
@property (nonatomic) float fovLimit;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } framingSpaceBounds;
@property (nonatomic, readonly) void gravity;
@property (nonatomic) bool isFrontCamera;
@property (nonatomic, readonly) float maxAllowedViewportWidth;
@property (nonatomic, readonly) int numCCWRotationsFromInputToFramingSpace;
@property (nonatomic, retain) CinematicFramingSessionOptions *options;
@property (nonatomic, readonly) struct { int x1; int x2; } outputDimensions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outputROI;
@property (nonatomic, readonly) int sensorID;
@property (nonatomic) bool visualizeViewport;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_compileComputeShader:(id)arg1 pixelFormat:(unsigned long long)arg2;
- (int)_compileShaders;
- (int)_createComputePipelinesForShaders:(id)arg1;
- (void)_filterDetectionsInInputImageCoordinates:(id)arg1 trackType:(long long)arg2;
- (float)_fisheyeStrengthForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2 outputAspectRatioInDeviceOrientation:(float)arg3;
- (float)_getHeightForWidth:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2;
- (float)_getWidthForHeight:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_moveDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)_outputPlaneCcwRotations;
- (void)_outputPlaneSizeForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_pointInFramingSpaceLandscapeLeftIsValid:(void *)arg1 withDisplayRect:(void *)arg2; // needs 2 arg types, found 1: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }
- (struct CGPoint { double x1; double x2; })_projectPointInFramingSpaceLandscapeLeft:(struct CGPoint { double x1; double x2; })arg1 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_rotationMatrixForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_scaleDisplayRectSizeToFit:(struct CGSize { double x1; double x2; })arg1;
- (void)_searchEarliestValidPointOnIntervalWithStart:(void *)arg1 andEnd:(void *)arg2 displayRect:(void *)arg3; // needs 3 arg types, found 1: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }
- (struct CGSize { double x1; double x2; })_searchValidSizeForStartSize:(void *)arg1 invalidPoint:(void *)arg2; // needs 2 arg types, found 1: struct CGSize { double x1; double x2; }
- (void)_setShaderParametersForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 calibrationParameters:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1; })arg3 commandEncoder:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calibrationParameters:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1; })arg2;
- (float)additionalCameraRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustDisplayRectToFitInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1; })calibrationParams;
- (int)cameraOrientation;
- (bool)cameraOrientationCorrectionEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeNewCoordinatesInOrientation:(int)arg1 forViewportInCurrentOrientation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (void)finish;
- (float)fovLimit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })framingSpaceBounds;
- (float)getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2;
- (float)getHeightForWidth:(float)arg1;
- (float)getWidthForHeight:(float)arg1;
- (void)gravity;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)initializeMetal;
- (bool)isFrontCamera;
- (float)maxAllowedViewportWidth;
- (int)numCCWRotationsFromInputToFramingSpace;
- (id)options;
- (float)outputAspectRatioInDeviceOrientation;
- (struct { int x1; int x2; })outputDimensions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputROI;
- (int)processBuffer:(struct __CVBuffer { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3;
- (struct CGPoint { double x1; double x2; })projectPointInFramingSpace:(struct CGPoint { double x1; double x2; })arg1 toDisplayRectInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })projectRectInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDisplayRectInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)registerAdditionalCameraRotation:(float)arg1;
- (int)registerCalibrationData:(id)arg1;
- (void)registerGravityX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (void)registerSensorID:(int)arg1;
- (int)sensorID;
- (void)setCameraOrientation:(int)arg1;
- (void)setCameraOrientationCorrectionEnabled:(bool)arg1;
- (void)setFovLimit:(float)arg1;
- (void)setIsFrontCamera:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setOutputROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisualizeViewport:(bool)arg1;
- (bool)visualizeViewport;
- (void)warpMetadataInInputImageCoordinatesToFramingSpace:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })warpRectInInputImageCoordinatesToFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
