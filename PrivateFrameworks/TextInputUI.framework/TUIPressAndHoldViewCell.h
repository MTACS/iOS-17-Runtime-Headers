
@interface TUIPressAndHoldViewCell : UICollectionViewCell {
    NSString * _accentVariant;
    unsigned long long  _accentVariantNumber;
    UILabel * _accentVariantNumberLabel;
    long long  _alignment;
    UILabel * _textLabel;
}

@property (nonatomic, copy) NSString *accentVariant;
@property (nonatomic) unsigned long long accentVariantNumber;
@property (nonatomic, retain) UILabel *accentVariantNumberLabel;
@property (nonatomic) long long alignment;
@property (nonatomic, retain) UILabel *textLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)accentVariant;
- (unsigned long long)accentVariantNumber;
- (id)accentVariantNumberLabel;
- (long long)alignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccentVariant:(id)arg1;
- (void)setAccentVariantNumber:(unsigned long long)arg1;
- (void)setAccentVariantNumberLabel:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;
- (void)updateColors;
- (void)updateLabels;

@end
