
@interface TPSCloudCallingListController : TPSListController <TPSCloudCallingURLControllerDelegate> {
    OBPrivacyLinkController * _privacyLinkController;
    OBPrivacyPresenter * _privacyPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) OBPrivacyLinkController *privacyLinkController;
@property (nonatomic, readonly) OBPrivacyPresenter *privacyPresenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1;
- (void)presentOrUpdateViewController:(id)arg1;
- (void)presentPrivacyPresenter;
- (id)privacyLinkController;
- (id)privacyPresenter;
- (void)privacySplashControllerDidRequestDismissal:(id)arg1;

@end
