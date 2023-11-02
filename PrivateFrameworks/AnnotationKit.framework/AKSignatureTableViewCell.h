
@interface AKSignatureTableViewCell : UITableViewCell {
    AKSignature * _signature;
    UIImageView * _signatureImageView;
    UILabel * _signatureLabel;
}

@property (nonatomic, retain) AKSignature *signature;
@property (nonatomic, retain) UIImageView *signatureImageView;
@property (nonatomic, retain) UILabel *signatureLabel;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_setImageFromSignature;
- (void)_setLabelFromSignature;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSignature:(id)arg1;
- (void)setSignatureImageView:(id)arg1;
- (void)setSignatureLabel:(id)arg1;
- (id)signature;
- (id)signatureImageView;
- (id)signatureLabel;

@end
