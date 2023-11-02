
@interface VCPMotionFlowRequest : VCPRequest {
    VCPImageMotionFlowAnalyzer * _motionFlowAnalyzer;
    unsigned int  _preferredFormat;
    int  _preferredHeight;
    int  _preferredWidth;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    bool  _useSingleEspressoModel;
}

- (void).cxx_destruct;
- (bool)cleanupWithOptions:(id)arg1 error:(id*)arg2;
- (int)convertPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer {}**)arg2 withPixelFormat:(int)arg3;
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (void)dealloc;
- (id)estimateMotionBetweenFirstImage:(struct __CVBuffer { }*)arg1 andSecondImage:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (id)estimateMotionBetweenFirstImage:(struct __CVBuffer { }*)arg1 andSecondImage:(struct __CVBuffer { }*)arg2 withUpsample:(bool)arg3 withGuidedImage:(struct __CVBuffer { }*)arg4 error:(id*)arg5;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 cancel:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned int)preferredPixelFormat;
- (bool)updateWithOptions:(id)arg1 error:(id*)arg2;

@end
