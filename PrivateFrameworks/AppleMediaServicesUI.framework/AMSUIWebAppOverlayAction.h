
@interface AMSUIWebAppOverlayAction : AMSUIWebAction <SKOverlayDelegate> {
    NSString * _appIdentifier;
    NSString * _campaignToken;
    NSString * _customProductPageIdentifier;
    bool  _dismiss;
    NSString * _latestReleaseID;
    SKOverlay * _presentationOverlay;
    NSString * _providerToken;
    AMSMutableBinaryPromise * _storeKitOverlayPromise;
}

@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *campaignToken;
@property (nonatomic, retain) NSString *customProductPageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismiss;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *latestReleaseID;
@property (nonatomic, retain) SKOverlay *presentationOverlay;
@property (nonatomic, retain) NSString *providerToken;
@property (nonatomic, retain) AMSMutableBinaryPromise *storeKitOverlayPromise;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_determineScene;
- (id)_dismissOverlay;
- (id)_dismissStoreKitOverlay;
- (id)_presentOverlayWithAppIdentifier:(id)arg1;
- (id)_presentStoreKitOverlayWithAppIdentifier:(id)arg1;
- (bool)_shouldUseStoreKit;
- (id)appIdentifier;
- (id)campaignToken;
- (id)customProductPageIdentifier;
- (bool)dismiss;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)latestReleaseID;
- (id)presentationOverlay;
- (id)providerToken;
- (id)runAction;
- (void)setAppIdentifier:(id)arg1;
- (void)setCampaignToken:(id)arg1;
- (void)setCustomProductPageIdentifier:(id)arg1;
- (void)setDismiss:(bool)arg1;
- (void)setLatestReleaseID:(id)arg1;
- (void)setPresentationOverlay:(id)arg1;
- (void)setProviderToken:(id)arg1;
- (void)setStoreKitOverlayPromise:(id)arg1;
- (id)storeKitOverlayPromise;
- (void)storeOverlay:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishPresentation:(id)arg2;

@end
