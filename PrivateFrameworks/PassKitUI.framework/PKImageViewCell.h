
@interface PKImageViewCell : UITableViewCell {
    long long  _imageViewContentMode;
    bool  _matchCellBackgroundToImage;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) long long imageViewContentMode;
@property (nonatomic) bool matchCellBackgroundToImage;

- (id)image;
- (long long)imageViewContentMode;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (bool)matchCellBackgroundToImage;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageViewContentMode:(long long)arg1;
- (void)setMatchCellBackgroundToImage:(bool)arg1;

@end
