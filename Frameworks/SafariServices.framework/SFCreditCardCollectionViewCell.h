
@interface SFCreditCardCollectionViewCell : UICollectionViewCell {
    UIImageView * _cardArt;
    WBSCreditCardData * _cardData;
    UILabel * _cardDescriptionLabel;
    UIStackView * _cardDescriptionStackView;
    UILabel * _cardNameLabel;
    UIStackView * _topLevelStackView;
    UIVisualEffectView * _vibrantWalletImageView;
}

@property (nonatomic, retain) WBSCreditCardData *cardData;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)cardData;
- (void)configureViewWithCardData:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCardData:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end
