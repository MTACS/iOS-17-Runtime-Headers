
@interface JFXMetalHelpers : NSObject {
    <MTLDevice> * m_device;
}

+ (id)copyMetalLibraryWithDevice:(id)arg1 error:(id*)arg2;
+ (struct __CVBuffer { }*)createCVTextureFromImage:(struct __CVBuffer { }*)arg1 withTextureCache:(struct __CVMetalTextureCache { }*)arg2;
+ (unsigned long long)metalPixelFormatForImage:(struct __CVBuffer { }*)arg1;

- (void).cxx_destruct;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)newPipelineStateForFunctionWithName:(id)arg1;
- (id)newTexture:(id)arg1;
- (id)newTextureWithSameSizeAs:(id)arg1 pixelFormat:(unsigned long long)arg2;
- (id)newTextureWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 pixelFormat:(unsigned long long)arg3 usage:(unsigned long long)arg4;
- (bool)runComputeEncoder:(id)arg1 pipelineState:(id)arg2 referenceTexture:(id)arg3;

@end
