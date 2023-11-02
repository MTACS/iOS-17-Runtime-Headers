
@interface DeskCamRenderingSession : NSObject <DeskCamRenderingManager> {
    bool  _autoZoomFactorUpdate;
    NSArray * _bodyDetections;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sensorSize; 
    }  _calibrationParameters;
    int  _cameraOrientation;
    <MTLCommandQueue> * _commandQueue;
    bool  _constrainRollUpdate;
    struct __CVMetalTextureCache { } * _cvMetalTextureCacheRef;
    NSArray * _faceDetections;
    bool  _gimbalLock;
    void _gravity;
    bool  _isFrontCamera;
    <MTLLibrary> * _library;
    <MTLDevice> * _metalDevice;
    DeskCamSessionOptions * _options;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    int  _outputPlaneCcwRotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outputPlaneRectangle;
    int  _outputType;
    float  _pitch;
    NSString * _portType;
    float  _roll;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _rotationMatrix;
    int  _sensorID;
    <MTLBuffer> * _statisticsBuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _subjectRect;
    CinematicTracker * _subjectTracker;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
    <MTLBuffer> * _toneMappingControlsBuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unscaledOutputPlaneRectangle;
    float  _zoomFactorApplied;
    float  _zoomFactorRequested;
    int  _zoomFactorType;
}

@property (nonatomic, readonly) unsigned int exifOrientation;
@property (nonatomic, readonly) void focusPoint;
@property (nonatomic, retain) DeskCamSessionOptions *options;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } subjectRect;
@property (nonatomic, readonly) bool transformIsValid;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } transformMatrix;
@property (nonatomic, readonly) struct { struct { } x1; } trapezoid;
@property (nonatomic, readonly) float zoomFactorApplied;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applyZoomFactorToOutputPlane:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_compileComputeShader:(id)arg1;
- (int)_compileShaders;
- (void)_constrainedRollUpdate:(float)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultFramingSpaceViewport:(float)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_framingSpaceBoundsLandscapeLeft;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1; bool x2; float x3; int x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; float x_5_1_5; float x_5_1_6; float x_5_1_7; float x_5_1_8; } x5; struct { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; float x_6_1_5; float x_6_1_6; float x_6_1_7; float x_6_1_8; } x6; })_imageWarpingControls;
- (void)_initializeMetal;
- (id)_newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 label:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_outputPlaneRectForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_outputPlaneSizeForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_pointInFramingSpaceLandscapeLeftIsValid;
- (void)_projectPointToFramingSpaceLandscapeLeft;
- (void)_projectPointToInputImageCoordinates;
- (struct { struct { } x1; })_projectRectInFramingSpaceLandscapeLeftToInputImageCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { } x1; })_projectRectInInputImageToFramingSpaceLandscapeLeftCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_rotationMatrixForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scalePlaneToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_shiftOutputPlaneToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)_zoomFactorValueForOutputPlane;
- (void)dealloc;
- (unsigned int)exifOrientation;
- (void)focusPoint;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 portType:(id)arg2;
- (id)options;
- (int)processBuffer:(struct __CVBuffer { }*)arg1 outputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)registerCameraCalibrationDictionary:(id)arg1;
- (void)registerCameraOrientation:(int)arg1;
- (void)registerFaceDetections:(id)arg1 bodyDetections:(id)arg2;
- (void)registerGravity;
- (void)registerOutputType:(int)arg1;
- (void)registerTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)registerZoomFactorRequested:(float)arg1 zoomFactorType:(int)arg2;
- (void)setOptions:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })subjectRect;
- (bool)transformIsValid;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })transformMatrix;
- (struct { struct { } x1; })trapezoid;
- (float)zoomFactorApplied;

@end
