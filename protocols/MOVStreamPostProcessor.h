
@protocol MOVStreamPostProcessor <NSObject>

@required

- (id)exactBytesPerRow;
- (id)initWithOriginalPixelFormat:(unsigned int)arg1;
- (unsigned int)originalPixelFormat;
- (struct __CVBuffer { }*)processedPixelBufferFrom:(struct __CVBuffer { }*)arg1 metadata:(NSDictionary *)arg2 error:(id*)arg3;
- (unsigned int)processedPixelFormat;
- (bool)removePadding;
- (void)setExactBytesPerRow:(id)arg1;
- (void)setOriginalPixelFormat:(unsigned int)arg1;
- (void)setRemovePadding:(bool)arg1;

@end
