
@interface ARMLDepthData : NSObject <ARResultData> {
    struct __CVBuffer { } * _confidenceBuffer;
    struct __CVBuffer { } * _confidenceMap;
    struct __CVBuffer { } * _depthBuffer;
    struct __CVBuffer { } * _normalsBuffer;
    struct __CVBuffer { } * _singleFrameConfidenceBuffer;
    struct __CVBuffer { } * _singleFrameDepthBuffer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _singleFrameDepthBufferLock;
    long long  _source;
    ARImageData * _sourceImageData;
    double  _timestamp;
}

@property (nonatomic, readonly) struct __CVBuffer { }*confidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*confidenceMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) struct __CVBuffer { }*depthBuffer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } depthBufferSize;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CVBuffer { }*normalsBuffer;
@property (nonatomic) struct __CVBuffer { }*singleFrameConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*singleFrameDepthBuffer;
@property (nonatomic, readonly) long long source;
@property (nonatomic, retain) ARImageData *sourceImageData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)confidenceBuffer;
- (struct __CVBuffer { }*)confidenceMap;
- (void)dealloc;
- (struct __CVBuffer { }*)depthBuffer;
- (struct CGSize { double x1; double x2; })depthBufferSize;
- (id)description;
- (id)initWithTimestamp:(double)arg1 depthBuffer:(struct __CVBuffer { }*)arg2 confidenceBuffer:(struct __CVBuffer { }*)arg3 source:(long long)arg4;
- (id)initWithTimestamp:(double)arg1 depthBuffer:(struct __CVBuffer { }*)arg2 source:(long long)arg3;
- (struct __CVBuffer { }*)normalsBuffer;
- (void)setConfidenceMap:(struct __CVBuffer { }*)arg1;
- (void)setNormalsBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSingleFrameConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSingleFrameDepthBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSourceImageData:(id)arg1;
- (struct __CVBuffer { }*)singleFrameConfidenceBuffer;
- (struct __CVBuffer { }*)singleFrameDepthBuffer;
- (long long)source;
- (id)sourceImageData;
- (double)timestamp;

@end
