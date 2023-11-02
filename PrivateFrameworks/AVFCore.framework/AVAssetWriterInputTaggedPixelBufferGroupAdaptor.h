
@interface AVAssetWriterInputTaggedPixelBufferGroupAdaptor : NSObject {
    AVAssetWriterInput * _input;
}

@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*pixelBufferPool;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;

+ (id)assetWriterInputTaggedPixelBufferGroupAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;

- (bool)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)assetWriterInput;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)sourcePixelBufferAttributes;

@end
