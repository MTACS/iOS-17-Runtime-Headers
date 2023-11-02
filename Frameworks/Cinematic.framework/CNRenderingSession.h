
@interface CNRenderingSession : NSObject {
    <MTLCommandQueue> * _commandQueue;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredTransform;
    long long  _quality;
    PTRenderPipeline * _renderPipeline;
    <PTRenderState> * _renderState;
    CNRenderingSessionAttributes * _sessionAttributes;
}

@property (readonly) <MTLCommandQueue> *commandQueue;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (readonly) long long quality;
@property (readonly) CNRenderingSessionAttributes *sessionAttributes;

+ (id)destinationPixelFormatTypes;
+ (id)sourcePixelFormatTypes;

- (void).cxx_destruct;
- (bool)_encodeRenderToCommandBuffer:(id)arg1 frameAttributes:(id)arg2 sourceImage:(struct __CVBuffer { }*)arg3 sourceDisparity:(struct __CVBuffer { }*)arg4 destinationTexture:(id)arg5 destRGBA:(bool)arg6;
- (id)commandQueue;
- (bool)encodeRenderToCommandBuffer:(id)arg1 frameAttributes:(id)arg2 sourceImage:(struct __CVBuffer { }*)arg3 sourceDisparity:(struct __CVBuffer { }*)arg4 destinationImage:(struct __CVBuffer { }*)arg5;
- (bool)encodeRenderToCommandBuffer:(id)arg1 frameAttributes:(id)arg2 sourceImage:(struct __CVBuffer { }*)arg3 sourceDisparity:(struct __CVBuffer { }*)arg4 destinationLuma:(id)arg5 destinationChroma:(id)arg6;
- (bool)encodeRenderToCommandBuffer:(id)arg1 frameAttributes:(id)arg2 sourceImage:(struct __CVBuffer { }*)arg3 sourceDisparity:(struct __CVBuffer { }*)arg4 destinationRGBA:(id)arg5;
- (id)initWithCommandQueue:(id)arg1 sessionAttributes:(id)arg2 preferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 quality:(long long)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (long long)quality;
- (id)sessionAttributes;

@end
