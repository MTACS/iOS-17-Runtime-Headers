
@interface JEBrotliDecoder : NSObject {
    struct BrotliDecoderStateStruct { } * _decoder;
}

@property (nonatomic, readonly) struct BrotliDecoderStateStruct { }*decoder;

- (void)dealloc;
- (struct BrotliDecoderStateStruct { }*)decoder;
- (long long)decompressStreamWithAvailableIn:(unsigned long long*)arg1 nextIn:(const char **)arg2 availableOut:(unsigned long long*)arg3 nextOut:(char **)arg4;
- (id)init;

@end
