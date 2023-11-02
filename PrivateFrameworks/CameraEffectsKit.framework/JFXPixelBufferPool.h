
@interface JFXPixelBufferPool : NSObject {
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned int  _type;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned int type;

- (struct __CVBuffer { }*)createPixelBuffer;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 type:(unsigned int)arg2;
- (struct CGSize { double x1; double x2; })size;
- (unsigned int)type;

@end
