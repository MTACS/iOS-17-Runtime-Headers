
@interface TSUUIImage : TSUImage {
    UIImage * mUIImage;
}

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;

- (struct CGImage { }*)CGImage;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)UIImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)imageOrientation;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
