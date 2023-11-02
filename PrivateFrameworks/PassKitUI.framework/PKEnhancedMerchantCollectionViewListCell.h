
@interface PKEnhancedMerchantCollectionViewListCell : UICollectionViewListCell <PKLinkedApplicationObserver> {
    UIButton * _appStoreButton;
    <PKEnhancedMerchantCellDelegate> * _delegate;
    UILabel * _detailedDescriptionLabel;
    PKAccountEnhancedMerchant * _enhancedMerchant;
    UIImageView * _imageView;
    PKLinkedApplication * _linkedApplication;
    UIListContentView * _listContentView;
    UIButton * _mapsButton;
    UIButton * _websiteButton;
}

@property (nonatomic, retain) UIButton *appStoreButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailedDescriptionLabel;
@property (nonatomic, readonly) PKAccountEnhancedMerchant *enhancedMerchant;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, readonly) PKLinkedApplication *linkedApplication;
@property (nonatomic, retain) UIListContentView *listContentView;
@property (nonatomic, retain) UIButton *mapsButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *websiteButton;

- (void).cxx_destruct;
- (id)_buttonAttributedStringForString:(id)arg1;
- (id)_buttonFont;
- (void)_commonInit;
- (void)_dispatchActionToDelegate:(long long)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_initializeViewsIfNecessary;
- (void)_updateAppStoreButtonBasedOnLinkedApplicationState;
- (void)_updateImageViewDynamicColors;
- (id)_visibleButtons;
- (id)appStoreButton;
- (void)dealloc;
- (id)detailedDescriptionLabel;
- (id)enhancedMerchant;
- (id)imageView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (id)listContentView;
- (id)mapsButton;
- (void)setAppStoreButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailedDescriptionLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setListContentView:(id)arg1;
- (void)setMapsButton:(id)arg1;
- (void)setWebsiteButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithAccountEnhancedMerchant:(id)arg1;
- (id)websiteButton;

@end
