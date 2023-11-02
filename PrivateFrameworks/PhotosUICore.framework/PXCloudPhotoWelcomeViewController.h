
@interface PXCloudPhotoWelcomeViewController : OBWelcomeController <AAUIGenericTermsRemoteUIDelegate, ICQUICloudStorageOffersManagerDelegate, PXCloudPhotoWelcomeNavigationControllerDismissDelegate> {
    NSArray * __buttons;
    bool  __enableOnAppear;
    ICQUICloudStorageOffersManager * __offersManager;
    bool  __requireStorageUpgrade;
    AAUIGenericTermsRemoteUI * __termsManager;
}

@property (setter=_setButtons:, nonatomic, retain) NSArray *_buttons;
@property (setter=_setEnableOnAppear:, nonatomic) bool _enableOnAppear;
@property (setter=_setOffersManager:, nonatomic, retain) ICQUICloudStorageOffersManager *_offersManager;
@property (setter=_setRequireStorageUpgrade:, nonatomic) bool _requireStorageUpgrade;
@property (setter=_setTermsManager:, nonatomic, retain) AAUIGenericTermsRemoteUI *_termsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_buttons;
- (void)_cloudPhotoWelcomeViewGoButtonTapped:(id)arg1;
- (void)_cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1;
- (void)_cloudPhotoWelcomeViewNotNowButtonTapped:(id)arg1;
- (void)_continueWithoutStoragePurchase:(id)arg1;
- (void)_enableCloudPhotoLibrary;
- (void)_enableCloudPhotoLibraryWithoutCheck;
- (bool)_enableOnAppear;
- (void)_handleEnableError:(id)arg1;
- (id)_offersManager;
- (bool)_requireStorageUpgrade;
- (void)_setButtons:(id)arg1;
- (void)_setButtonsEnabled:(bool)arg1;
- (void)_setEnableOnAppear:(bool)arg1;
- (void)_setOffersManager:(id)arg1;
- (void)_setRequireStorageUpgrade:(bool)arg1;
- (void)_setTermsManager:(id)arg1;
- (id)_termsManager;
- (void)_updateCurrentActivity;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (id)initWithDefaultTitle;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)navigationControllerDidDismissViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
