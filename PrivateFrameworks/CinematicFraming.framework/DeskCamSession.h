
@interface DeskCamSession : NSObject {
    NSString * _deviceModelName;
    unsigned int  _exifOrientation;
    void _focusPoint;
    DeskCamSessionOptions * _options;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    int  _outputType;
    NSString * _portType;
    DeskCamRenderingSession * _renderingSession;
    bool  _transformIsValid;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _transformMatrix;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*topLeft; 
        } corners; 
    }  _trapezoid;
    float  _zoomFactorApplied;
    float  _zoomFactorRequested;
    int  _zoomFactorType;
}

@property (nonatomic, readonly) unsigned int exifOrientation;
@property (nonatomic, readonly) void focusPoint;
@property (nonatomic, retain) DeskCamSessionOptions *options;
@property (nonatomic) int outputType;
@property (nonatomic, readonly) bool transformIsValid;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } transformMatrix;
@property (nonatomic, readonly) struct { struct { } x1; } trapezoid;
@property (nonatomic, readonly) float zoomFactorApplied;
@property (nonatomic) float zoomFactorRequested;
@property (nonatomic) int zoomFactorType;

- (void).cxx_destruct;
- (unsigned int)exifOrientation;
- (void)focusPoint;
- (id)init;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 portType:(id)arg2 deviceModelName:(id)arg3;
- (id)options;
- (int)outputType;
- (int)processPixelBuffer:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3;
- (void)setOptions:(id)arg1;
- (void)setOutputType:(int)arg1;
- (void)setZoomFactorRequested:(float)arg1;
- (void)setZoomFactorType:(int)arg1;
- (bool)transformIsValid;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })transformMatrix;
- (struct { struct { } x1; })trapezoid;
- (float)zoomFactorApplied;
- (float)zoomFactorRequested;
- (int)zoomFactorType;

@end
