
@interface PanoramaPreviewOutput : NSObject {
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, retain) struct __CVBuffer { }*pixelBuffer;

- (id)init;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
