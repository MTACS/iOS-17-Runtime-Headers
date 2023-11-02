
@interface PKDashboardAuxiliaryPassInformationViewController : PKDashboardViewController {
    PKContactAvatarManager * _contactAvatarManager;
    UIButton * _detailsButton;
    PKAlignedContentContainerView * _detailsButtonContainer;
    PKDashboardViewControllerFooterView * _footer;
    PKDashboardViewControllerFooterContainer * _footerContainer;
    double  _headerHeight;
    NSIndexPath * _headerIndexPath;
    PKDashboardDetailHeaderItemPresenter * _headerPresenter;
    bool  _isHeaderPinned;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lastContentInset;
    NSObject<OS_dispatch_source> * _loadingMapsTimer;
    bool  _loadingMapsViewController;
    double  _merchantHeaderAnimationProgress;
    UIButton * _messageButton;
    PKAlignedContentContainerView * _messageButtonContainer;
    UIButton * _phoneButton;
    PKAlignedContentContainerView * _phoneButtonContainer;
    UIImageView * _titleIconImageView;
    NSString * _titleText;
    PKAnimatedNavigationBarTitleView * _titleView;
}

- (void).cxx_destruct;
- (id)_barButtonItems;
- (void)_handleInfoButtonTapped;
- (void)_handleMessageButtonTapped;
- (void)_handlePhoneButtonTapped;
- (bool)_shouldBlurButtons;
- (void)_showMapsDetailsViewController;
- (void)_updateButtonConfigurationsDisablingBlur:(bool)arg1;
- (void)_updateHeaderCellWithAnimationProgress:(id)arg1;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(bool)arg1;
- (void)_updateNavigationBarIconWithLogoURL:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)initWithItem:(id)arg1 forPass:(id)arg2;
- (struct { bool x1; long long x2; })pkui_navigationStatusBarStyleDescriptor;
- (void)updateContent;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
