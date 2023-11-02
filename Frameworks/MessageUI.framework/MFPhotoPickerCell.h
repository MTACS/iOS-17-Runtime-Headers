
@interface MFPhotoPickerCell : UICollectionViewCell <MFReusableIdentifiable> {
    UIImageView * _imageView;
    long long  _mediaType;
    UIImageView * _mediaTypeBadgeView;
    MFRoundProgressView * _progressView;
    NSString * _representedAssetIdentifier;
    UIImageView * _selectedBadgeView;
    UIImage * _thumbnailImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) long long mediaType;
@property (nonatomic, retain) UIImageView *mediaTypeBadgeView;
@property (nonatomic, retain) MFRoundProgressView *progressView;
@property (nonatomic, copy) NSString *representedAssetIdentifier;
@property (nonatomic, retain) UIImageView *selectedBadgeView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnailImage;

+ (id)reusableIdentifier;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)mediaType;
- (id)mediaTypeBadgeView;
- (void)prepareForReuse;
- (id)progressView;
- (id)representedAssetIdentifier;
- (void)resetProgress;
- (id)selectedBadgeView;
- (void)setImageView:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMediaTypeBadgeView:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressView:(id)arg1;
- (void)setRepresentedAssetIdentifier:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedBadgeView:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (id)thumbnailImage;

@end
