
@interface y416ToRawBayerPostProcessor : DefaultPostProcessor {
    MIOPixelBufferPool * _pool;
}

- (void).cxx_destruct;
- (struct __CVBuffer { }*)processedPixelBufferFrom:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 error:(id*)arg3;
- (unsigned int)processedPixelFormat;

@end
