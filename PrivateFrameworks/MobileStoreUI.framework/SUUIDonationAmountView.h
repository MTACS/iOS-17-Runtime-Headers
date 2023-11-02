
@interface SUUIDonationAmountView : UIView {
    NSArray * _amountButtons;
    UILabel * _amountDisclaimerLabel;
    SUUIGiftCharity * _charity;
    UILabel * _descriptionLabel;
    UILabel * _legalText2Label;
    UILabel * _legalTextLabel;
    UIImageView * _logoImageView;
    UIScrollView * _scrollView;
    long long  _selectedAmountIndex;
    UIView * _separatorView;
}

@property (nonatomic, readonly) SUUIGiftCharity *charity;
@property (nonatomic, retain) UIImage *logoImage;
@property (nonatomic, readonly) SUUIGiftAmount *selectedAmount;

- (void).cxx_destruct;
- (void)_amountButtonDown:(id)arg1;
- (void)_amountButtonUpInside:(id)arg1;
- (void)_amountButtonUpOutside:(id)arg1;
- (id)charity;
- (void)dealloc;
- (id)initWithCharity:(id)arg1;
- (void)layoutSubviews;
- (id)logoImage;
- (id)selectedAmount;
- (void)setLogoImage:(id)arg1;

@end
