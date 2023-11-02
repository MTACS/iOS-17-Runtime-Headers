
@interface JFXFaceTrackingTransformCalculator : NSObject {
    JFXARMetadata * _arMetadata;
    long long  _interfaceOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    float  _pixelsPerUnit;
}

@property (nonatomic, retain) JFXARMetadata *arMetadata;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } billboardTransform;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraProjection;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } onFaceTransform;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic) float pixelsPerUnit;

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })interpolateFrom:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 to:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 fraction:(float)arg3;

- (void).cxx_destruct;
- (id)arMetadata;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })billboardTransform;
- (id)calculateFaceTrackingTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraProjection;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (id)initWithARMetaData:(id)arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 playableInterfaceOrientation:(long long)arg3;
- (long long)interfaceOrientation;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })nonScaledOrientedCameraTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })onFaceTransform;
- (struct CGSize { double x1; double x2; })outputSize;
- (float)pixelsPerUnit;
- (void)setArMetadata:(id)arg1;
- (void)setPixelsPerUnit:(float)arg1;

@end
