
@interface PKTransactionReceiptLineItemTableViewCell : UITableViewCell {
    UILabel * _amountLabel;
    NSString * _amountText;
    bool  _hasTrailingLineSeparator;
    UIImage * _image;
    UIImageView * _imageView;
    UILabel * _primaryLabel;
    NSString * _primaryText;
    UILabel * _secondaryLabel;
    NSString * _secondaryText;
    bool  _suppressImage;
    UILabel * _tertiaryLabel;
    NSString * _tertiaryText;
}

@property (nonatomic, copy) NSString *amountText;
@property (nonatomic) bool hasTrailingLineSeparator;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic) bool suppressImage;
@property (nonatomic, copy) NSString *tertiaryText;

- (void).cxx_destruct;
- (id)amountText;
- (bool)hasTrailingLineSeparator;
- (id)image;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryText;
- (id)secondaryText;
- (void)setAmountText:(id)arg1;
- (void)setHasTrailingLineSeparator:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSuppressImage:(bool)arg1;
- (void)setTertiaryText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)suppressImage;
- (id)tertiaryText;

@end
