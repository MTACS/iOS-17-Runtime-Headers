
@interface PXPeopleScalableAvatarView : PXSmartScaleView {
    long long  _cornerStyle;
    PHFace * _face;
    struct CGSize { 
        double width; 
        double height; 
    }  _imagePixelSize;
    UIImageView * _imageView;
    double  _imageViewCornerRadius;
    <PXPerson> * _person;
    bool  _useLowMemoryMode;
}

@property (nonatomic) long long cornerStyle;
@property (nonatomic, retain) PHFace *face;
@property (retain) UIImageView *imageView;
@property (nonatomic) double imageViewCornerRadius;
@property (nonatomic, retain) <PXPerson> *person;
@property (nonatomic) bool useLowMemoryMode;

- (void).cxx_destruct;
- (void)_updateImageAndWait:(bool)arg1;
- (long long)cornerStyle;
- (id)face;
- (id)imageView;
- (double)imageViewCornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)person;
- (void)setCornerStyle:(long long)arg1;
- (void)setFace:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageViewCornerRadius:(double)arg1;
- (void)setPerson:(id)arg1;
- (void)setPersonAndWaitForImage:(id)arg1;
- (void)setUseLowMemoryMode:(bool)arg1;
- (void)updateImage;
- (bool)useLowMemoryMode;
- (void)viewScaleDidChange;

@end
