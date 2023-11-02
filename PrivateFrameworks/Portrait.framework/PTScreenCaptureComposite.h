
@interface PTScreenCaptureComposite : NSObject {
    <MTLComputePipelineState> * _floatingAlphaCutout;
    struct half3x4 { 
        struct half4 { 
            /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*values[4]; 
        } columns[3]; 
    }  _matrixRGBtoYUV;
    PTMetalContext * _metalContext;
    PTUtil * _util;
}

- (void).cxx_destruct;
- (int)floatingAlphaCutout:(id)arg1 inPersonSegmentation:(id)arg2 bilbyPersonMask:(id)arg3 bilbyEffectMask:(id)arg4 outVideoColorBufferRGBA:(id)arg5;
- (id)initWithMetalContext:(id)arg1;

@end
