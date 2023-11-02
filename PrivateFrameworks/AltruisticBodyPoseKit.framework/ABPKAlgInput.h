
@interface ABPKAlgInput : NSObject {
    struct __CVBuffer { } * _depthConfidenceBuffer;
    struct __CVBuffer { } * _depthMap;
    struct __CVBuffer { } * _image;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _imageCameraIntrinsics;
    ABPKImagePreProcessingParams * _imagePreProcessingParams;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    bool  _isDepthDataValid;
    double  _timestamp;
}

@property (nonatomic) struct __CVBuffer { }*depthConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*depthMap;
@property struct __CVBuffer { }*image;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } imageCameraIntrinsics;
@property (nonatomic) ABPKImagePreProcessingParams *imagePreProcessingParams;
@property (nonatomic) struct CGSize { double x1; double x2; } imageResolution;
@property bool isDepthDataValid;
@property double timestamp;

- (struct __CVBuffer { }*)depthConfidenceBuffer;
- (struct __CVBuffer { }*)depthMap;
- (struct __CVBuffer { }*)image;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })imageCameraIntrinsics;
- (id)imagePreProcessingParams;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)init;
- (bool)isDepthDataValid;
- (void)setDepthConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDepthMap:(struct __CVBuffer { }*)arg1;
- (void)setImage:(struct __CVBuffer { }*)arg1;
- (void)setImageCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setImagePreProcessingParams:(id)arg1;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsDepthDataValid:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
