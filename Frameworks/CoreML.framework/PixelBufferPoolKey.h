
@interface PixelBufferPoolKey : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    unsigned int  _pixelFormatType;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } frameSize;
@property (nonatomic, readonly) unsigned int pixelFormatType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })frameSize;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormatType:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned int)pixelFormatType;

@end
