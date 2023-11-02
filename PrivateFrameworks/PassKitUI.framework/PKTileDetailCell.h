
@interface PKTileDetailCell : UICollectionViewListCell {
    unsigned long long  _accessory;
    UIImageView * _accessoryView;
    UIColor * _backgroundColor;
    UIView * _customView;
    UILabel * _detailLabel;
    NSString * _detailText;
    UIView * _seperatorForCustomView;
    UIView * _seperatorForText;
    UILabel * _subtitleLabel;
    NSString * _subtitleText;
    NSString * _text;
    UILabel * _textLabel;
    NSString * _textSubtitle;
    UILabel * _textSubtitleLabel;
    UILabel * _titleLabel;
    NSString * _titleText;
}

@property (nonatomic) unsigned long long accessory;
@property (nonatomic, retain) UIView *customView;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *textSubtitle;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (unsigned long long)accessory;
- (id)customView;
- (id)detailText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessory:(unsigned long long)arg1;
- (void)setCustomView:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextSubtitle:(id)arg1;
- (void)setTitleText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleText;
- (id)text;
- (id)textSubtitle;
- (id)titleText;

@end
