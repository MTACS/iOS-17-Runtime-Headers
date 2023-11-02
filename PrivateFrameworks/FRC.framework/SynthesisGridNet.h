
@interface SynthesisGridNet : EspressoModel {
    struct __CVPixelBufferPool {} * _bufferPools;
    struct { 
        struct __CVBuffer {} *features[5]; 
    }  _intermediateBuffer;
}

- (void)dealloc;
- (id)initWithMode:(long long)arg1;
- (bool)synthesizeFrameFromFeatureForward:(struct { struct __CVBuffer {} *x1[5]; }*)arg1 backward:(struct { struct __CVBuffer {} *x1[5]; }*)arg2 destination:(struct __CVBuffer { }*)arg3 pyramidStartLevel:(unsigned long long)arg4 callback:(id /* block */)arg5;

@end
