
@interface VNDepthRepresentation : NSObject {
    AVDepthData * _depthData;
    unsigned int  _orientation;
}

@property (readonly) bool absoluteAccuracy;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (readonly) struct __CVBuffer { }*depthBuffer;
@property (readonly) bool highQuality;
@property (readonly) NSData *lensDistortionData;
@property (readonly) unsigned int orientation;

+ (id)depthRepresentationForDepthData:(id)arg1 orientation:(unsigned int)arg2;
+ (id)depthRepresentationForImageSource:(struct CGImageSource { }*)arg1 orientation:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)_initWithAVDepthData:(id)arg1 orientation:(unsigned int)arg2;
- (bool)absoluteAccuracy;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (struct __CVBuffer { }*)depthBuffer;
- (bool)highQuality;
- (id)lensDistortionData;
- (unsigned int)orientation;

@end
