
@interface SFSiteCardCell : UICollectionViewCell <WBSStartPageCardProxy> {
    UIVisualEffectView * _backgroundEffectView;
    UIImageView * _badgeView;
    SFSiteCardSourceView * _captionLabel;
    _SFSiteIconView * _imageView;
    UIVisualEffectView * _subtitleEffectView;
    UILabel * _subtitleLabel;
    UILayoutGuide * _textLayoutGuide;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) _UIVisualEffectBackdropView *backdropCaptureView;
@property (nonatomic, retain) UIImage *badge;
@property (nonatomic, copy) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateVibrancy;
- (id)backdropCaptureView;
- (id)badge;
- (id)caption;
- (id)focusEffect;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackdropCaptureView:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCaptionText:(id)arg1 icon:(id)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageFromBookmark:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
