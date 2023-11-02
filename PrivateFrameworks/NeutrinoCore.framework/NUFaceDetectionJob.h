
@interface NUFaceDetectionJob : NURenderJob {
    NSArray * _faces;
    struct { 
        long long width; 
        long long height; 
    }  _imageSize;
}

@property (readonly) NUFaceDetectionRequest *faceDetectionRequest;

- (void).cxx_destruct;
- (id)cacheKey;
- (void)cleanUp;
- (id)detectFaceLandmarksInBuffer:(struct __CVBuffer { }*)arg1 withFaceRects:(id)arg2 error:(out id*)arg3;
- (id)detectFaceRectsInBuffer:(struct __CVBuffer { }*)arg1 maxResultCount:(unsigned long long)arg2 error:(out id*)arg3;
- (id)faceDetectionRequest;
- (id)initWithFaceDetectionRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
