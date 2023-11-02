
@interface LiPersonDepthWriter : NSObject {
    <MTLDevice> * _device;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _matteTexCoords;
    long long  _sampleCount;
}

@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic) long long sampleCount;

+ (id)sharedDepthStencilStateWithDevice:(id)arg1;
+ (id)sharedRenderPipelineStateWithDevice:(id)arg1 sampleCount:(long long)arg2;

- (void)computeMatteTexCoordsWithMatteSize:(struct CGSize { double x1; double x2; })arg1 projectSize:(struct CGSize { double x1; double x2; })arg2 videoOrientation:(int)arg3;
- (void)dealloc;
- (id)device;
- (void)drawWithDepthMap:(id)arg1 matte:(id)arg2 uniforms:(struct PersonDepthUniforms { float x1; float x2; float x3; int x4; })arg3 windowSize:(struct CGSize { double x1; double x2; })arg4 renderCommandEncoder:(id)arg5;
- (id)initWithDevice:(id)arg1 sampleCount:(long long)arg2;
- (id)renderPassDescriptorWithColorTexture:(id)arg1 depthTexture:(id)arg2;
- (long long)sampleCount;
- (void)setDevice:(id)arg1;
- (void)setSampleCount:(long long)arg1;
- (void)writeWithDepthMap:(id)arg1 matte:(id)arg2 depthTexture:(id)arg3 colorTexture:(id)arg4 uniforms:(struct PersonDepthUniforms { float x1; float x2; float x3; int x4; })arg5 windowSize:(struct CGSize { double x1; double x2; })arg6 commandBuffer:(id)arg7;

@end
