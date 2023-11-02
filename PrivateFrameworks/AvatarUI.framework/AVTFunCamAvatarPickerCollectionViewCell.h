
@interface AVTFunCamAvatarPickerCollectionViewCell : UICollectionViewCell {
    UIButton * _accessoryButton;
    NSUUID * _displaySessionUUID;
    struct CGSize { 
        double width; 
        double height; 
    }  _engagedSize;
    long long  _imageContentMode;
    id /* block */  _imageInsetProvider;
    AVTUIAnimatingImageView * _imageView;
    bool  _roundImageCorners;
    CAShapeLayer * _selectionLayer;
    bool  _selectionVisible;
    bool  _showsTitle;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (nonatomic) struct CGSize { double x1; double x2; } engagedSize;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, copy) id /* block */ imageInsetProvider;
@property (nonatomic, readonly) AVTUIAnimatingImageView *imageView;
@property (nonatomic) bool roundImageCorners;
@property (nonatomic, readonly) CAShapeLayer *selectionLayer;
@property (nonatomic) bool selectionVisible;
@property (nonatomic) bool showsTitle;

+ (id)cellIdentifier;
+ (struct CGPath { }*)selectionPathInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (id)accessoryButton;
- (id)displaySessionUUID;
- (struct CGSize { double x1; double x2; })engagedSize;
- (long long)imageContentMode;
- (id /* block */)imageInsetProvider;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (bool)roundImageCorners;
- (id)selectionLayer;
- (bool)selectionVisible;
- (void)setAccessoryButton:(id)arg1;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setEngagedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageContentMode:(long long)arg1;
- (void)setImageInsetProvider:(id /* block */)arg1;
- (void)setImageZoomFactor:(double)arg1;
- (void)setRoundImageCorners:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionVisible:(bool)arg1;
- (void)setShowsTitle:(bool)arg1;
- (bool)showsTitle;
- (void)updateSelectionLayer;
- (void)updateWithImage:(id)arg1 animated:(bool)arg2;
- (void)updateWithTintColor:(id)arg1;

@end
