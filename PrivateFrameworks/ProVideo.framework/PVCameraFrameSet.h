
@interface PVCameraFrameSet : NSObject {
    PVImageBuffer * _alphaMaskImageBuffer;
    long long  _cameraPosition;
    struct opaqueCMSampleBuffer { } * _colorSampleBuffer;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _colorTransform;
    AVDepthData * _depthData;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _depthTransform;
    NSDictionary * _metadata;
    double  _rollRadians;
    long long  deviceOrientation;
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  orientation;
}

@property (retain) PVImageBuffer *alphaMaskImageBuffer;
@property (nonatomic) long long cameraPosition;
@property (nonatomic, readonly) PVImageBuffer *colorImageBuffer;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*colorSampleBuffer;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } colorTransform;
@property (nonatomic, readonly) AVDepthData *depthData;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } depthTransform;
@property (nonatomic) long long deviceOrientation;
@property (retain) NSDictionary *metadata;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } orientation;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;
@property (nonatomic) double rollRadians;

- (void).cxx_destruct;
- (void)_sharedInitColorBuffer:(struct opaqueCMSampleBuffer { }*)arg1 colorTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 depthData:(id)arg3 depthTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 metadata:(id)arg5;
- (id)alphaMaskImageBuffer;
- (long long)cameraPosition;
- (id)colorImageBuffer;
- (struct opaqueCMSampleBuffer { }*)colorSampleBuffer;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })colorTransform;
- (void)dealloc;
- (id)depthData;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })depthTransform;
- (long long)deviceOrientation;
- (id)initWithColorBuffer:(struct opaqueCMSampleBuffer { }*)arg1 depthData:(id)arg2 metadata:(id)arg3;
- (id)initWithColorBuffer:(struct opaqueCMSampleBuffer { }*)arg1 metadata:(id)arg2;
- (id)metadata;
- (struct { double x1; double x2; double x3; double x4; })orientation;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (double)rollRadians;
- (void)setAlphaMaskImageBuffer:(id)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setColorTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setDepthTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOrientation:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setRollRadians:(double)arg1;

@end
