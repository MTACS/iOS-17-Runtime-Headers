
@interface ICImageAttachmentView : ICAttachmentView {
    UIImage * _image;
    CALayer * _imageLayer;
    id /* block */  _imageLoadingCancelBlock;
    UIImageView * _loadingImageView;
    UIImage * _placeholderImage;
    bool  _shouldShowLoadingImage;
    bool  _shouldTryToReloadImageIfLoadingFails;
    bool  _shouldUpdateLayoutInImageDidLoad;
}

@property (nonatomic) UIImage *image;
@property (retain) CALayer *imageLayer;
@property (nonatomic, copy) id /* block */ imageLoadingCancelBlock;
@property (nonatomic, readonly) bool isThumbnailView;
@property (nonatomic, retain) UIImageView *loadingImageView;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic) bool shouldShowLoadingImage;
@property (nonatomic) bool shouldTryToReloadImageIfLoadingFails;
@property (nonatomic) bool shouldUpdateLayoutInImageDidLoad;

+ (id)ICLoadingPlaceholderBackgroundColor;
+ (id)ICLoadingPlaceholderIconColor;
+ (double)ICLoadingPlaceholderIconSize;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (void)animateImageArrival;
- (bool)cancelDidScrollIntoVisibleRange;
- (void)dealloc;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)didMoveToWindow;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForContent;
- (id)icaxHintString;
- (id)image;
- (id)imageContentsGravity;
- (void)imageDidLoad:(id)arg1 shouldFade:(bool)arg2;
- (id)imageForPrinting;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)imageLayer;
- (id /* block */)imageLoadingCancelBlock;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isAttachmentEditable;
- (bool)isThumbnailView;
- (id)loadingImageView;
- (id)placeholderImage;
- (void)prepareForPrinting;
- (void)refreshLoadingImage;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageLayer:(id)arg1;
- (void)setImageLoadingCancelBlock:(id /* block */)arg1;
- (void)setLoadingImageView:(id)arg1;
- (void)setShouldShowLoadingImage:(bool)arg1;
- (void)setShouldTryToReloadImageIfLoadingFails:(bool)arg1;
- (void)setShouldUpdateLayoutInImageDidLoad:(bool)arg1;
- (void)setShowLoadingImage:(bool)arg1;
- (void)setupBorderForLayer:(id)arg1;
- (void)setupEventHandling;
- (void)setupImagePlaceholder;
- (void)setupImagePlaceholderIfNecessary;
- (void)sharedInit:(bool)arg1;
- (bool)shouldShowLoadingImage;
- (bool)shouldTryToReloadImageIfLoadingFails;
- (bool)shouldUpdateLayoutInImageDidLoad;
- (bool)showLoadingImage;
- (void)updateImageInView:(bool)arg1;
- (void)updateImageInViewIfNecessary;
- (void)updateImageSize;

@end
