
@interface VCImageConverterBase : NSObject {
    struct __CVPixelBufferPool { } * _bufferPool;
    NSMutableDictionary * _bufferPoolDictionary;
    unsigned int  _formatType;
    unsigned long long  _outputHeight;
    unsigned long long  _outputWidth;
}

- (void)dealloc;
- (bool)ensureBufferPoolSupportsOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2;
- (id)initWithFormatType:(unsigned int)arg1;
- (bool)setUpBufferPoolForOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2;

@end
