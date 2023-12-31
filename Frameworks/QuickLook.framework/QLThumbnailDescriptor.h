
@interface QLThumbnailDescriptor : NSObject {
    double  _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property double scaleFactor;
@property struct CGSize { double x1; double x2; } size;

+ (id)descriptorWithSize:(struct CGSize { double x1; double x2; })arg1 scaleFactor:(double)arg2;

- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
