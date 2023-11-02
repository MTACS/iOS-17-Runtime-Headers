
@interface PRComplicationGallerySectionHeaderView : UICollectionReusableView {
    UIImageView * _iconImageView;
    UILabel * _label;
}

@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) NSString *title;

+ (struct CGSize { double x1; double x2; })iconImageSize;

- (void).cxx_destruct;
- (id)iconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setIconImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
