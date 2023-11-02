
@interface JFXImageIOSurfaceView : UIView <JFXImageViewRendering> {
    bool  _enableDebugDrawing;
    bool  _flipX;
    bool  _flipY;
    JTImage * _jtImage;
    long long  _renderingType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableDebugDrawing;
@property (nonatomic) bool flipX;
@property (nonatomic) bool flipY;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) JTImage *jtImage;
@property (nonatomic, readonly) long long renderingType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)JFXImageIOSurfaceView_commonInit;
- (bool)enableDebugDrawing;
- (bool)flipX;
- (bool)flipY;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)jtImage;
- (long long)renderingType;
- (void)setEnableDebugDrawing:(bool)arg1;
- (void)setFlipX:(bool)arg1;
- (void)setFlipY:(bool)arg1;
- (void)setJtImage:(id)arg1;
- (void)setRenderingType:(long long)arg1;
- (void)updateDebugDrawing;

@end
