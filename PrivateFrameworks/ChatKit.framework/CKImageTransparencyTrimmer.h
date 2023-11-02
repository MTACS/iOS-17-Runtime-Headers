
@interface CKImageTransparencyTrimmer : NSObject {
    char * _bitmap;
    int  _bitmapSize;
    int  _bytesPerRow;
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) char *bitmap;
@property (nonatomic) int bitmapSize;
@property (nonatomic) int bytesPerRow;
@property (nonatomic, readonly) double height;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trimmedFrame;
@property (nonatomic, readonly) double width;

- (void).cxx_destruct;
- (char *)bitmap;
- (int)bitmapSize;
- (int)bytesPerRow;
- (void)dealloc;
- (double)height;
- (id)image;
- (bool)isTooSmallToTrim;
- (unsigned char)pixel:(int)arg1 col:(int)arg2;
- (void)setBitmap:(char *)arg1;
- (void)setBitmapSize:(int)arg1;
- (void)setBytesPerRow:(int)arg1;
- (void)setImage:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)trimTransparencyFromImage:(id)arg1;
- (double)trimmedBottom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trimmedFrame;
- (double)trimmedLeft;
- (double)trimmedRight;
- (double)trimmedTop;
- (double)width;

@end
