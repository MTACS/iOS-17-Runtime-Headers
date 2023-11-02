
@interface _NTKPigmentAddCell : UICollectionViewCell {
    UIImageView * _check;
    CLKDevice * _device;
    NTKPigmentEditOption * _pigmentEditOption;
    UIColor * _primaryColor;
    UIImageView * _swatch;
}

@property (nonatomic, readonly) UIImageView *check;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic, retain) NTKPigmentEditOption *pigmentEditOption;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, readonly) UIImageView *swatch;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateCheck;
- (id)check;
- (id)device;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pigmentEditOption;
- (id)primaryColor;
- (void)setDevice:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPigmentEditOption:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (id)swatch;

@end
