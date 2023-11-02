
@interface PXImageQueueLayer : CALayer {
    struct _CAImageQueue { } * _imageQueue;
    struct __CVBuffer { } * _pixelBuffer;
    unsigned long long  _pixelBufferId;
}

@property (nonatomic) struct __CVBuffer { }*pixelBuffer;

- (void)_commonInit;
- (void)dealloc;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
