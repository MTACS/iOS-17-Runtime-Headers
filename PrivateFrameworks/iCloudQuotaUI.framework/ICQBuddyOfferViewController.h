
@interface ICQBuddyOfferViewController : OBWelcomeController <ICQPageDelegate> {
    <ICQPageDelegate> * _pageDelegate;
    _ICQPageSpecification * _pageSpecification;
    OBBoldTrayButton * _purchase2Button;
    OBBoldTrayButton * _purchaseButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ICQPageDelegate> *pageDelegate;
@property (nonatomic, readonly) _ICQPageSpecification *pageSpecification;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;

+ (bool)supportsPageClassIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)bottomButtonTapped:(id)arg1;
- (void)hideSpinner;
- (id)initWithPageSpecification:(id)arg1;
- (id)pageDelegate;
- (id)pageSpecification;
- (void)purchase2ButtonTapped:(id)arg1;
- (void)purchaseButtonTapped:(id)arg1;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (void)setPageDelegate:(id)arg1;
- (id)upgradeOfferPageSpecification;

@end
