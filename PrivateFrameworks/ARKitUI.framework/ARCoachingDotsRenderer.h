
@interface ARCoachingDotsRenderer : NSObject {
    <MTLRenderPipelineState> * _pipelineState;
    unsigned long long  _pixelFormat;
}

- (void).cxx_destruct;
- (void)encode:(id)arg1 renderCommandEncoder:(id)arg2 mvp:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 visibility:(float)arg4 renderParams:(struct { float x1; float x2; float x3; float x4; })arg5 time:(double)arg6;
- (id)init:(id)arg1 pixelFormat:(unsigned long long)arg2 metalLibrary:(id)arg3 sampleCount:(int)arg4;

@end
