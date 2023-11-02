
@interface PKImageView : UIView {
    UIImage * _addImage;
    CALayer * _addLayer;
    UIImage * _image;
    CALayer * _imageLayer;
    UIImage * _mulImage;
    CALayer * _mulLayer;
}

@property (nonatomic, retain) UIImage *addImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImage *mulImage;

- (void).cxx_destruct;
- (id)_createLayerWithImage:(id)arg1 compositingFiler:(id)arg2;
- (void)_updateAddLayer;
- (void)_updateImageLayer;
- (void)_updateLayerFrames;
- (void)_updateMulLayer;
- (id)addImage;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)mulImage;
- (void)setAddImage:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setMulImage:(id)arg1;
- (void)setupWithDrawing:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 strokeSpaceClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 sixChannel:(bool)arg5;

@end
