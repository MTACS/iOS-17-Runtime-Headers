
@interface CinematicFramingSession : NSObject {
    bool  _calibrationDataRegistered;
    NSObject<OS_dispatch_queue> * _dataOutputDelegateQueue;
    CinematicFramingDirector * _director;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _displayViewport;
    int  _framingStyle;
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
    }  _outputFramingRectOfInterest;
    CinematicFramingRenderer * _renderer;
    unsigned int  _roiHeatMap;
}

@property (nonatomic) int cameraOrientation;
@property (nonatomic) bool cameraOrientationCorrectionEnabled;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentViewport;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } displayViewport;
@property (nonatomic) float fovLimit;
@property (nonatomic) int framingStyle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } idealViewport;
@property (nonatomic, readonly) CinematicFramingSessionOptions *options;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outputFramingRectOfInterest;
@property (nonatomic, readonly) NSArray *roiHeatMapCounts;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetViewport;
@property (nonatomic) float zoomLevel;

- (void).cxx_destruct;
- (void)_updateROIHeatMapCountersWithCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)cameraOrientation;
- (bool)cameraOrientationCorrectionEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentViewport;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayViewport;
- (float)fovLimit;
- (int)framingStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })idealViewport;
- (id)init;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 mode:(int)arg2 portType:(id)arg3 deviceModelName:(id)arg4;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 portType:(id)arg2 deviceModelName:(id)arg3;
- (id)options;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputFramingRectOfInterest;
- (int)processPixelBuffer:(struct __CVBuffer { }*)arg1 outputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })processWithMetadata:(id)arg1;
- (void)reset;
- (id)roiHeatMapCounts;
- (void)setCameraOrientation:(int)arg1;
- (void)setCameraOrientationCorrectionEnabled:(bool)arg1;
- (void)setFovLimit:(float)arg1;
- (void)setFramingStyle:(int)arg1;
- (void)setOutputFramingRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setZoomLevel:(float)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetViewport;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })warpBoundingBoxInFrameCoordinatesToDisplayCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)zoomLevel;

@end
