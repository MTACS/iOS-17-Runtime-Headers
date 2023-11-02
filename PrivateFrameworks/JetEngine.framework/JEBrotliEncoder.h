
@interface JEBrotliEncoder : NSObject {
    struct BrotliEncoderStateStruct { } * _encoder;
    unsigned int  _quality;
    unsigned int  _sizeHint;
}

@property (nonatomic, readonly) struct BrotliEncoderStateStruct { }*encoder;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic) unsigned int quality;
@property (nonatomic) unsigned int sizeHint;

- (bool)compressStreamWithOperation:(long long)arg1 availableIn:(unsigned long long*)arg2 nextIn:(const char **)arg3 availableOut:(unsigned long long*)arg4 nextOut:(char **)arg5;
- (void)dealloc;
- (struct BrotliEncoderStateStruct { }*)encoder;
- (id)init;
- (bool)isFinished;
- (unsigned int)quality;
- (void)setQuality:(unsigned int)arg1;
- (void)setSizeHint:(unsigned int)arg1;
- (unsigned int)sizeHint;

@end
