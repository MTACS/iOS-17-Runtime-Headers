
@interface WFPurgeableImage : NSObject {
    unsigned int  _bitmapInfo;
    unsigned long long  _bitsPerComponent;
    NSPurgeableData * _bytes;
    unsigned long long  _bytesPerRow;
    struct CGColorSpace { } * _colorSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

- (void).cxx_destruct;
- (void)accessImageContext:(id /* block */)arg1;
- (struct CGImage { }*)copyImage;
- (void)dealloc;
- (id)description;
- (id)initWithCGImage:(struct CGImage { }*)arg1;

@end
