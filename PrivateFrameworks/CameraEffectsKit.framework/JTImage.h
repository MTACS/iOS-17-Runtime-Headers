
@interface JTImage : NSObject {
    UIImage * _image;
    PVImageBuffer * _pvImageBuffer;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) PVImageBuffer *pvImageBuffer;

+ (id)jtImageWithUIImage:(id)arg1;

- (void).cxx_destruct;
- (id)bluredImageWithFlippedXAxis:(bool)arg1;
- (bool)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;
- (id)image;
- (id)initWithPVImage:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)pvImageBuffer;

@end
