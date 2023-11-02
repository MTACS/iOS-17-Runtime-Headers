
@interface PUPhotoEditEffectCell : UICollectionViewCell {
    NSLayoutConstraint * _bottomLabelConstraint;
    NSArray * _constraints;
    NSLayoutConstraint * _gapConstraint;
    UIView * _highlightView;
    UIImage * _image;
    UIImageView * _imageView;
    NSString * _name;
    UILabel * _nameLabel;
    UIImageView * _selectionView;
}

@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UIImageView *selectionView;

+ (id)selectionOutlineImage;

- (void).cxx_destruct;
- (id)_colorForIsSelected:(bool)arg1;
- (void)_setSubview:(id)arg1 visible:(bool)arg2 animated:(bool)arg3;
- (id)highlightView;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)name;
- (id)nameLabel;
- (void)prepareForReuse;
- (id)selectionView;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelectionView:(id)arg1;
- (void)updateConstraints;

@end
