
@interface ICGalleryAttachmentViewCell : UICollectionViewCell {
    ICAttachment * _attachment;
    <ICGalleryAttachmentViewCellDelegate> * _delegate;
    CALayer * _fadeImageLayer;
    CALayer * _fadeMaskLayer;
    CALayer * _fadeWhiteLayer;
    UIImageView * _imageView;
    bool  _shouldFade;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic) <ICGalleryAttachmentViewCellDelegate> *delegate;
@property (nonatomic, retain) CALayer *fadeImageLayer;
@property (nonatomic, retain) CALayer *fadeMaskLayer;
@property (nonatomic, retain) CALayer *fadeWhiteLayer;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, readonly) bool isPortrait;
@property (nonatomic) bool shouldFade;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)attachment;
- (void)dealloc;
- (id)delegate;
- (id)fadeImageLayer;
- (id)fadeMaskLayer;
- (id)fadeWhiteLayer;
- (id)imageView;
- (bool)isPortrait;
- (void)prepareForReuse;
- (void)setAttachment:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFadeImageLayer:(id)arg1;
- (void)setFadeMaskLayer:(id)arg1;
- (void)setFadeWhiteLayer:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setShouldFade:(bool)arg1;
- (bool)shouldFade;
- (void)updateFadeMask:(bool)arg1;
- (void)updateImage;

@end
