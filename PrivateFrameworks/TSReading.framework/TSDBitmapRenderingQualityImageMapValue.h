
@interface TSDBitmapRenderingQualityImageMapValue : NSObject {
    struct CGImage { } * mDegradedImageRef;
    struct CGSize { 
        double width; 
        double height; 
    }  mMaxSize;
}

- (void)addSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (struct CGImage { }*)degradedImageRefForForProvider:(id)arg1 quality:(int)arg2 canvasScale:(float)arg3;

@end
