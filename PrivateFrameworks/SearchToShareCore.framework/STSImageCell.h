
@interface STSImageCell : UICollectionViewCell {
    UIImageView * _badgeView;
    NSString * _category;
    UIImageView * _debugBadgeView;
    double  _downloadProgress;
    STSCellDownloadOverlayView * _downloadProgressView;
    STSAnimatedImageInfo * _imageInfo;
    UIImageView * _imageView;
    UIView * _labelBackgroundView;
    UILabel * _labelView;
    UIColor * _placeholderColor;
    UIView * _placeholderColorView;
    bool  _showDownloadIndicator;
}

@property (nonatomic, retain) UIImage *badge;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, retain) UIImage *debugBadge;
@property (nonatomic) double downloadProgress;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) STSAnimatedImageInfo *imageInfo;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic) bool showDownloadIndicator;

- (void).cxx_destruct;
- (void)_updateBadgeAnimated:(bool)arg1;
- (void)_updatePlaceholderViewAnimated:(bool)arg1;
- (id)badge;
- (id)category;
- (id)debugBadge;
- (double)downloadProgress;
- (id)image;
- (double)imageAspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)imageInfo;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)placeholderColor;
- (void)prepareForReuse;
- (void)setBadge:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDebugBadge:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setImageInfo:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setShowDownloadIndicator:(bool)arg1;
- (void)setShowDownloadIndicator:(double)arg1 animated:(bool)arg2;
- (bool)showDownloadIndicator;

@end
