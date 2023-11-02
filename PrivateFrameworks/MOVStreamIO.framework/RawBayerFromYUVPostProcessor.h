
@interface RawBayerFromYUVPostProcessor : DefaultPostProcessor {
    bool  _rawBayerMSBReplication;
}

@property (nonatomic) bool rawBayerMSBReplication;

- (id)initWithOriginalPixelFormat:(unsigned int)arg1 rawBayerMSBReplication:(bool)arg2;
- (struct __CVBuffer { }*)processedPixelBufferFrom:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 error:(id*)arg3;
- (unsigned int)processedPixelFormat;
- (bool)rawBayerMSBReplication;
- (void)setRawBayerMSBReplication:(bool)arg1;

@end
