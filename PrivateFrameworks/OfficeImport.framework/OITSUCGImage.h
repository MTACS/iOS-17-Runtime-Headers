
@interface OITSUCGImage : OITSUImage {
    struct CGImage { } * mCGImage;
    long long  mOrientation;
    double  mScale;
}

- (struct CGImage { }*)CGImage;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)imageOrientation;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
