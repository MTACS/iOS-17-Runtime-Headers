
@interface NUVideoExportJob : NUExportJob {
    NUDigest * _digest;
    <NUVideoProperties> * _videoProperties;
}

@property (nonatomic, retain) NUDigest *digest;
@property (nonatomic, retain) <NUVideoProperties> *videoProperties;

- (void).cxx_destruct;
- (id)digest;
- (id)generateVideoComposition:(out id*)arg1;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithVideoExportRequest:(id)arg1;
- (id)prepareNodeWithPipelineState:(id)arg1 error:(out id*)arg2;
- (bool)render:(out id*)arg1;
- (bool)renderVideoFrames:(id)arg1 videoMetadataSamples:(id)arg2 intoPixelBuffer:(struct __CVBuffer { }*)arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 colorSpace:(id)arg5 error:(out id*)arg6;
- (id)renderer:(out id*)arg1;
- (bool)requiresVideoComposition;
- (id)result;
- (id)scalePolicy;
- (void)setDigest:(id)arg1;
- (void)setVideoProperties:(id)arg1;
- (void)updateDigestWithRenderedFrame:(struct __CVBuffer { }*)arg1;
- (id)videoExportRequest;
- (id)videoProperties;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputVideo;
- (bool)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 createCustomMetadata:(bool)arg4 geometryTransform:(id)arg5 inputSize:(struct CGSize { double x1; double x2; })arg6 outputSize:(struct CGSize { double x1; double x2; })arg7 error:(out id*)arg8;

@end
