
@interface VIImageScaler : NSObject {
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    void defaultBlackOpaqueColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  entireImage;
    void fillColor;
    bool  needFill;
    unsigned long long  scaleMode;
    bool  useFill;
}

- (struct __CVBuffer { }*)createCroppedImageWithSource:(const struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct __CVBuffer { }*)createImageWithSource:(const struct __CVBuffer { }*)arg1 format:(unsigned int)arg2;
- (struct __CVBuffer { }*)createScaledImageWithSource:(const struct __CVBuffer { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (int)cropScaleImageFromSource:(const struct __CVBuffer { }*)arg1 destination:(const struct __CVBuffer { }*)arg2 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 bottomLeftBoxOrigin:(bool)arg4;
- (int)cropScaleImageFromSource:(const struct __CVBuffer { }*)arg1 destination:(const struct __CVBuffer { }*)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dealloc;
- (id)init;
- (int)scaleImageFromSource:(const struct __CVBuffer { }*)arg1 destination:(const struct __CVBuffer { }*)arg2;
- (int)setFillColorBGRA;
- (int)setScalingMode:(unsigned long long)arg1;
- (int)setVTTransferSessionProperties:(id)arg1;
- (int)unsetFillColor;

@end
