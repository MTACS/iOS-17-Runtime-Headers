
@interface PKEnhancedMerchantCollectionViewCell : UICollectionViewCell {
    UIColor * _appliedInputColor;
    PKAccountEnhancedMerchant * _enhancedMerchant;
    CAFilter * _highlightFilter;
    UIColor * _highlightInputColor;
    bool  _highlighted;
    UIImageView * _imageView;
    UIColor * _normalInputColor;
    bool  _selected;
}

@property (nonatomic, readonly) PKAccountEnhancedMerchant *enhancedMerchant;
@property (nonatomic, retain) UIImageView *imageView;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_createHighlightFilterIfNecessary;
- (void)_updateFilter;
- (id)enhancedMerchant;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithAccountEnhancedMerchant:(id)arg1;

@end
