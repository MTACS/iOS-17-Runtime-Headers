
@interface VideoAccessIndexNorm : VideoAccessIndex {
    void * mNormalizer;
}

- (int)getFrameAtIndex:(unsigned int)arg1 pixBuf:(struct __CVBuffer {}**)arg2;
- (id)initFromFile:(id)arg1 pixelFormat:(unsigned int)arg2 normalizer:(void*)arg3;

@end
