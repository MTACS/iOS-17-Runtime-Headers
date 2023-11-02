
@interface AVTStickerRecentsStickerCollectionViewCell : UICollectionViewCell {
    NSUUID * _displaySessionUUID;
    UIImageView * _imageView;
    UILabel * _prereleaseLabel;
    bool  _showPrereleaseSticker;
    NSString * _title;
}

@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *prereleaseLabel;
@property (nonatomic) bool showPrereleaseSticker;
@property (nonatomic, copy) NSString *title;

+ (id)identifier;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)displaySessionUUID;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)prereleaseLabel;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setShowPrereleaseSticker:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setupPrereleaseLabelIfNeeded;
- (bool)showPrereleaseSticker;
- (id)title;
- (void)updateWithDefaultImage;
- (void)updateWithImage:(id)arg1;

@end
