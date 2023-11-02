
@interface AVTStickerCollectionViewCell : UICollectionViewCell <AVTMSStickerViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    <AVTStickerCollectionViewCellDelegate> * _delegate;
    NSUUID * _displaySessionUUID;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullImageSize;
    UIImageView * _imageView;
    UILabel * _prereleaseLabel;
    CAShapeLayer * _selectionLayer;
    bool  _showPrereleaseSticker;
    bool  _showSelectionLayer;
    AVTMSStickerView * _stickerView;
    bool  _stickerViewIsAnimating;
}

@property (nonatomic) bool allowsPeel;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic) <AVTStickerCollectionViewCellDelegate> *delegate;
@property (nonatomic) <AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate;
@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (nonatomic) struct CGSize { double x1; double x2; } fullImageSize;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *prereleaseLabel;
@property (nonatomic, retain) CAShapeLayer *selectionLayer;
@property (nonatomic) bool showPrereleaseSticker;
@property (nonatomic) bool showSelectionLayer;
@property (nonatomic, readonly) AVTMSStickerView *stickerView;
@property (nonatomic) bool stickerViewIsAnimating;

+ (id)cellIdentifier;
+ (double)imageInsetForWidth:(double)arg1;
+ (struct CGPath { }*)selectionPathInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (bool)allowsPeel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)delegate;
- (id)disclosureValidationDelegate;
- (id)displaySessionUUID;
- (struct CGSize { double x1; double x2; })fullImageSize;
- (struct CGSize { double x1; double x2; })imageSizeFromURL:(id)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)prereleaseLabel;
- (void)purgeImageContents;
- (id)selectionLayer;
- (void)setAllowsPeel:(bool)arg1;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureValidationDelegate:(id)arg1;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setFullImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionLayer:(id)arg1;
- (void)setShowPrereleaseSticker:(bool)arg1;
- (void)setShowSelectionLayer:(bool)arg1;
- (void)setStickerViewIsAnimating:(bool)arg1;
- (void)setupPrereleaseLabelIfNeeded;
- (bool)showPrereleaseSticker;
- (bool)showSelectionLayer;
- (id)stickerView;
- (void)stickerViewDidBeginPeel:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stickerViewFrameForImageSize:(struct CGSize { double x1; double x2; })arg1 clippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)stickerViewIsAnimating;
- (void)stickerViewWasTapped:(id)arg1;
- (void)updateWithImage:(id)arg1 sticker:(id)arg2 animated:(bool)arg3;

@end
