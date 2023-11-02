
@interface _UIActivityGroupActivityCell : UICollectionViewCell {
    _UIHostActivityProxy * _activityProxy;
    CALayer * _highlightLayer;
    UIImageView * _highlightedImageView;
    UIView * _imageSlot;
    UIImageView * _imageView;
    unsigned long long  _sequence;
    UIView * _shadowView;
    _UIActivityGroupActivityCellTitleLabel * _titleLabel;
    UIView * _titleSlot;
}

@property (nonatomic, retain) _UIHostActivityProxy *activityProxy;
@property (nonatomic, retain) CALayer *highlightLayer;
@property (nonatomic, retain) UIImageView *highlightedImageView;
@property (nonatomic, retain) UIView *imageSlot;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) unsigned long long sequence;
@property (nonatomic, retain) UIView *shadowView;
@property (nonatomic, retain) _UIActivityGroupActivityCellTitleLabel *titleLabel;
@property (nonatomic, retain) UIView *titleSlot;

+ (void)invalidatePreferredSizes;
+ (struct CGSize { double x1; double x2; })preferredSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 titleLabelText:(id)arg3 screenScale:(double)arg4;

- (void).cxx_destruct;
- (id)activityProxy;
- (id)draggingView;
- (id)highlightLayer;
- (id)highlightedImageView;
- (id)imageSlot;
- (id)imageView;
- (void)initHighlightLayerIfNeeded;
- (void)initHighlightedImageViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (unsigned long long)sequence;
- (void)setActivityProxy:(id)arg1;
- (void)setHighlightLayer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedImageView:(id)arg1;
- (void)setImageSlot:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSequence:(unsigned long long)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleSlot:(id)arg1;
- (id)shadowView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)titleSlot;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHighlightedImageViewIfNeeded;

@end
