
@interface ARImageScalingPassDescription : NSObject {
    unsigned int  _pixelBufferFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) unsigned int pixelBufferFormat;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (id)description;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)pixelBufferFormat;
- (void)setPixelBufferFormat:(unsigned int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
