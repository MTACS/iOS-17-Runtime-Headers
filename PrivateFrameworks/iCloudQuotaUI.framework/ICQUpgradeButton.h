
@interface ICQUpgradeButton : UIButton {
    NSAttributedString * _attributedDetailedLink;
    NSAttributedString * _attributedDetailedText;
    ICQLink * _link;
    ICQOffer * _offer;
}

@property (nonatomic, readonly) NSAttributedString *attributedDetailedLink;
@property (nonatomic, readonly) NSAttributedString *attributedDetailedText;
@property (nonatomic, readonly) ICQLink *link;
@property (nonatomic, retain) ICQOffer *offer;

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 buttonLinkAttributes:(id)arg3 links:(id)arg4;
+ (id)buttonWithType:(long long)arg1;
+ (bool)shouldShowForOffer:(id)arg1;
+ (bool)shouldShowForPremiumOffer:(id)arg1;
+ (id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1;
+ (id)upgradeButton;

- (void).cxx_destruct;
- (id)attributedDetailedLink;
- (id)attributedDetailedText;
- (id)buttonAttributes;
- (id)buttonLinkAttributes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)link;
- (id)offer;
- (void)setOffer:(id)arg1;

@end
