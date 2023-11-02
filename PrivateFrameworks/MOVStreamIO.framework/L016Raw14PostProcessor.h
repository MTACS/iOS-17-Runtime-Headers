
@interface L016Raw14PostProcessor : DefaultPostProcessor {
    bool  _l010OutputFormatRAW14L016;
}

@property (nonatomic) bool l010OutputFormatRAW14L016;

- (id)initWithOriginalPixelFormat:(unsigned int)arg1 l010OutputFormatRAW14L016:(bool)arg2;
- (bool)l010OutputFormatRAW14L016;
- (struct __CVBuffer { }*)processedPixelBufferFrom:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 error:(id*)arg3;
- (unsigned int)processedPixelFormat;
- (void)setL010OutputFormatRAW14L016:(bool)arg1;

@end
