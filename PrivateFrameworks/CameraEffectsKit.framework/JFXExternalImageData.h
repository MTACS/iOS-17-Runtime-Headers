
@interface JFXExternalImageData : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    long long  _cameraPosition;
    long long  _captureFramesPerSecond;
    bool  _hasValidFaceData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedFaceRect;
    long long  _orientation;
    struct __CVBuffer { } * _pixelBuffer;
    bool  _requiresFaceTracking;
    double  _rollAngle;
    double  _timestamp;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) long long captureFramesPerSecond;
@property (nonatomic) bool hasValidFaceData;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFaceRect;
@property (nonatomic) long long orientation;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic) bool requiresFaceTracking;
@property (nonatomic) double rollAngle;
@property (nonatomic) double timestamp;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (long long)cameraPosition;
- (long long)captureFramesPerSecond;
- (void)dealloc;
- (bool)hasValidFaceData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceRect;
- (long long)orientation;
- (struct __CVBuffer { }*)pixelBuffer;
- (bool)requiresFaceTracking;
- (double)rollAngle;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCaptureFramesPerSecond:(long long)arg1;
- (void)setHasValidFaceData:(bool)arg1;
- (void)setNormalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setRequiresFaceTracking:(bool)arg1;
- (void)setRollAngle:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
