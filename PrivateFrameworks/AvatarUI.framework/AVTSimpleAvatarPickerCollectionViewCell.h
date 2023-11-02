
@interface AVTSimpleAvatarPickerCollectionViewCell : UICollectionViewCell {
    NSUUID * _displaySessionUUID;
    unsigned long long  _imageInsetSize;
    AVTUIAnimatingImageView * _imageView;
    UIView * _selectionLayer;
    bool  _showSelectedState;
}

@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (nonatomic) unsigned long long imageInsetSize;
@property (nonatomic, readonly) AVTUIAnimatingImageView *imageView;
@property (nonatomic, readonly) UIView *selectionLayer;
@property (nonatomic) bool showSelectedState;

+ (id)cellIdentifier;
+ (double)imageInsetForInsetSize:(unsigned long long)arg1;
+ (struct CGPath { }*)selectionPathInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (id)displaySessionUUID;
- (unsigned long long)imageInsetSize;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)selectionLayer;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageInsetSize:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowSelectedState:(bool)arg1;
- (bool)shouldShowSelectionLayer;
- (bool)showSelectedState;
- (void)updateHighlightedState:(bool)arg1 animated:(bool)arg2;
- (void)updateSelectionLayerOpacityAnimated:(bool)arg1;
- (void)updateWithImage:(id)arg1 animated:(bool)arg2;

@end
