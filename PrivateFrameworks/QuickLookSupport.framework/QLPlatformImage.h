
@interface QLPlatformImage : NSObject {
    struct CGImage { } * _cgImage;
    id /* block */  _cleanupDataBlock;
    unsigned int  _orientation;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property struct CGImage { }*CGImage;
@property (readonly) UIImage *UIImage;
@property (nonatomic, copy) id /* block */ cleanupDataBlock;
@property unsigned int orientation;
@property double scale;
@property struct CGSize { double x1; double x2; } size;

+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(unsigned int)arg3;
+ (id)imageWithUIImage:(id)arg1;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)UIImage;
- (id /* block */)cleanupDataBlock;
- (void)dealloc;
- (unsigned int)orientation;
- (double)scale;
- (void)setCGImage:(struct CGImage { }*)arg1;
- (void)setCleanupDataBlock:(id /* block */)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
