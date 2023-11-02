
@interface ABPKInput : NSObject {
    ABPKCameraParams * _cameraParams;
    struct __CVBuffer { } * _depthConfidenceBuffer;
    struct __CVBuffer { } * _depthMap;
    struct __CVBuffer { } * _image;
    bool  _isDepthDataValid;
    bool  _isVioPoseValid;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _vioPose;
}

@property (retain) ABPKCameraParams *cameraParams;
@property (nonatomic) struct __CVBuffer { }*depthConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*depthMap;
@property struct __CVBuffer { }*image;
@property (nonatomic) bool isDepthDataValid;
@property bool isVioPoseValid;
@property double timestamp;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } vioPose;

- (void).cxx_destruct;
- (id)cameraParams;
- (struct __CVBuffer { }*)depthConfidenceBuffer;
- (struct __CVBuffer { }*)depthMap;
- (struct __CVBuffer { }*)image;
- (id)init;
- (bool)isDepthDataValid;
- (bool)isVioPoseValid;
- (int)saveDataToDir:(id)arg1 withFileNamePrefix:(id)arg2;
- (void)setCameraParams:(id)arg1;
- (void)setDepthConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDepthMap:(struct __CVBuffer { }*)arg1;
- (void)setImage:(struct __CVBuffer { }*)arg1;
- (void)setIsDepthDataValid:(bool)arg1;
- (void)setIsVioPoseValid:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVioPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (double)timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })vioPose;

@end
