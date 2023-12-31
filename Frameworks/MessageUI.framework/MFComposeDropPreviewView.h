
@interface MFComposeDropPreviewView : UIView {
    UIImage * _finalImage;
    UIImageView * _imageView;
    UIBezierPath * _previewClippingPath;
    UIView * _previewView;
}

@property (nonatomic, retain) UIImage *finalImage;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIBezierPath *previewClippingPath;
@property (nonatomic, retain) UIView *previewView;

- (void).cxx_destruct;
- (id)finalImage;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)previewClippingPath;
- (id)previewView;
- (void)setFinalImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPreviewClippingPath:(id)arg1;
- (void)setPreviewView:(id)arg1;

@end
