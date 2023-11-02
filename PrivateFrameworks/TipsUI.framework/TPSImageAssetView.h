
@interface TPSImageAssetView : UIView {
    bool  _aspectFillAsset;
    UIImageView * _backgroundImageView;
    NSString * _currentDisplayIdentifier;
    NSString * _currentImagePath;
    UIColor * _defaultBackgroundColor;
    <TPSImageAssetViewDelegate> * _delegate;
    bool  _hideImageWhenNil;
    UIView * _highlightView;
    TPSURLSessionItem * _imageURLSessionItem;
    UIImageView * _imageView;
    UIColor * _noImageBackgroundColor;
    UIColor * _overlayColor;
    bool  _respectLoadingStatus;
    bool  _roundedCorner;
    double  _roundedCornerRadius;
    unsigned long long  _status;
}

@property (nonatomic) bool aspectFillAsset;
@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) NSString *currentDisplayIdentifier;
@property (nonatomic, retain) NSString *currentImagePath;
@property (nonatomic, retain) UIColor *defaultBackgroundColor;
@property (nonatomic) <TPSImageAssetViewDelegate> *delegate;
@property (nonatomic) bool hideImageWhenNil;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) TPSURLSessionItem *imageURLSessionItem;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIColor *noImageBackgroundColor;
@property (nonatomic, retain) UIColor *overlayColor;
@property (nonatomic) bool respectLoadingStatus;
@property (nonatomic) bool roundedCorner;
@property (nonatomic) double roundedCornerRadius;
@property (nonatomic) unsigned long long status;

+ (bool)cacheImageAvailableForIdentifier:(id)arg1;
+ (id)defaultBackgroundColor;

- (void).cxx_destruct;
- (void)animateImageView:(bool)arg1;
- (bool)aspectFillAsset;
- (id)backgroundImageView;
- (void)cancel;
- (void)commonInit;
- (id)currentDisplayIdentifier;
- (id)currentImagePath;
- (id)defaultBackgroundColor;
- (id)delegate;
- (void)fetchImageWithIdentifier:(id)arg1 path:(id)arg2;
- (bool)hideImageWhenNil;
- (id)image;
- (id)imageURLSessionItem;
- (id)imageView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultBackgroundColor:(id)arg1 noImageBackgroundColor:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)noImageBackgroundColor;
- (id)overlayColor;
- (bool)respectLoadingStatus;
- (bool)roundedCorner;
- (double)roundedCornerRadius;
- (void)setAspectFillAsset:(bool)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setCurrentDisplayIdentifier:(id)arg1;
- (void)setCurrentImagePath:(id)arg1;
- (void)setDefaultBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideImageWhenNil:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageURLSessionItem:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setNoImageBackgroundColor:(id)arg1;
- (void)setOverlayColor:(id)arg1;
- (void)setRespectLoadingStatus:(bool)arg1;
- (void)setRoundedCorner:(bool)arg1;
- (void)setRoundedCornerRadius:(double)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)showHighlight:(bool)arg1;
- (unsigned long long)status;
- (void)updateBackgroundColor;

@end
