
@interface CIHomographyResampler : ImageHomographyResampler {
    CIContext * _ctx;
    CIImage * _fillImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFillRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  hightlightRect;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hightlightRect;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)ResampleCVPixels:(struct __CVBuffer { }*)arg1 clipToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (struct __CVBuffer { }*)ResampleCVPixels:(struct __CVBuffer { }*)arg1 clipToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 pixelBufferPool:(struct __CVPixelBufferPool { }*)arg4;
- (short)ResampleCVPixels:(struct __CVBuffer { }*)arg1 clipToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 toPixelBuffer:(struct __CVBuffer { }*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hightlightRect;
- (id)init;
- (void)setHightlightRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateBackgroundFill:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
