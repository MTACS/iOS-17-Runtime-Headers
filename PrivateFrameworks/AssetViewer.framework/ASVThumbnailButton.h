
@interface ASVThumbnailButton : UIButton {
    NSLayoutConstraint * _badgeTopConstraint;
    NSLayoutConstraint * _badgeTrailingConstraint;
    ASVBadgeView * _badgeView;
    UIImageView * _imageView;
    ASVLoadingView * _loadingView;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) UIImage *thumbnail;

+ (id)thumbnailButton;

- (void).cxx_destruct;
- (void)_setupButton;
- (void)_updateSubviewVisibility;
- (id)error;
- (void)layoutSubviews;
- (void)setError:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;

@end
