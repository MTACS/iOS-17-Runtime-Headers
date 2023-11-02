
@interface JFXImageView : UIView {
    long long  _currentImageViewType;
    bool  _disableIOSurface;
    bool  _disableMetalKit;
    bool  _enableDebugDrawing;
    UIView * _imageView;
    long long  _imageViewType;
    JTImage * _jtImage;
    bool  _preferIOSurfaceForYUV;
    bool  _preferMetalKit;
}

@property (nonatomic) long long currentImageViewType;
@property (nonatomic) bool disableIOSurface;
@property (nonatomic) bool disableMetalKit;
@property (nonatomic) bool enableDebugDrawing;
@property (nonatomic, retain) UIView *imageView;
@property (nonatomic) long long imageViewType;
@property (nonatomic, retain) JTImage *jtImage;
@property (nonatomic) bool preferIOSurfaceForYUV;
@property (nonatomic) bool preferMetalKit;

+ (id)colorFromImageViewType:(long long)arg1;
+ (id)colorFromRenderingType:(long long)arg1;
+ (bool)normalizedQuadVertices:(struct { struct { } x1[4]; }*)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2 textureSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(long long)arg4;

- (void).cxx_destruct;
- (void)JFXImageView_commonInit;
- (long long)currentImageViewType;
- (bool)disableIOSurface;
- (bool)disableMetalKit;
- (bool)enableDebugDrawing;
- (void)flipX;
- (id)imageView;
- (long long)imageViewType;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)jtImage;
- (bool)preferIOSurfaceForYUV;
- (bool)preferMetalKit;
- (long long)preferredImageViewTypeForImage:(id)arg1;
- (void)reconfigureImageView;
- (void)setContentMode:(long long)arg1;
- (void)setCurrentImageViewType:(long long)arg1;
- (void)setDisableIOSurface:(bool)arg1;
- (void)setDisableMetalKit:(bool)arg1;
- (void)setEnableDebugDrawing:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageViewType:(long long)arg1;
- (void)setJtImage:(id)arg1;
- (void)setPreferIOSurfaceForYUV:(bool)arg1;
- (void)setPreferMetalKit:(bool)arg1;
- (id)stringFromImageViewType:(long long)arg1;
- (void)updateDebugDrawing;
- (void)updateImageViewImage;

@end
