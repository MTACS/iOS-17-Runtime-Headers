
@interface L008ToNonPlanarPostProcessor : DefaultPostProcessor <MOVStreamPostProcessorSizeAdjusting> {
    MIOPixelBufferPool * _pool;
}

- (void).cxx_destruct;
- (unsigned long long)adjustedWidthForWidth:(unsigned long long)arg1;
- (struct __CVBuffer { }*)processedPixelBufferFrom:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 error:(id*)arg3;
- (unsigned int)processedPixelFormat;

@end
