
@interface VUIAppCell : UICollectionViewCell {
    bool  _didLayout;
    UIImage * _image;
    UIImageView * _imageView;
    NSString * _title;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)updateConstraints;

@end
