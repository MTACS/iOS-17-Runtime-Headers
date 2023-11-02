
@interface PXPhotosGridPeopleBannerProvider : NSObject <PXPeopleCandidateBannerViewDelegate, PXPhotosBannerProvider, PXPhotosGridUnnamedPersonBannerDelegate> {
    long long  _currentBannerType;
    PNPersonSuggestion * _currentSuggestion;
    bool  _dismissed;
    <PXPhotosBannerInvalidationDelegate> * _invalidationDelegate;
    PXPhotosGridUnnamedPersonBannerView * _loadedAddNameBannerView;
    PXPeopleCandidateBannerView * _loadedSuggestionBannerView;
    NSObject<OS_os_log> * _log;
    PHPerson * _person;
    <PXPhotosBannerPresentationDelegate> * _presentationDelegate;
    PXPeopleSuggestionDataSource * _reviewFacesDataSource;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDismissed, nonatomic, readonly) bool dismissed;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosBannerInvalidationDelegate> *invalidationDelegate;
@property (nonatomic, readonly) UIView<PXPhotosBannerView> *loadedBannerView;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic) <PXPhotosBannerPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analyticsBannerEventPayloadForSuggestion:(id)arg1 eventType:(long long)arg2;
- (void)_applySuggestedContactForBanner:(id)arg1;
- (void)_applySuggestedNameForBanner:(id)arg1;
- (void)_dismissBanner;
- (void)_dismissBannerIfNecessary;
- (id)_fetchAutonamingSuggestion;
- (bool)_isAllowedSuggestion:(id)arg1;
- (id)_loadAddNameBannerView;
- (id)_loadContactSuggestionBannerForContact:(id)arg1 isMe:(bool)arg2;
- (id)_loadNameSuggestionBannerForName:(id)arg1;
- (id)_loadReviewFacesBannerForDataSource:(id)arg1;
- (void)_persistNegativeUserFeedback:(id)arg1;
- (void)_runReviewFacesFlow;
- (void)_setSuggestionBannerView:(id)arg1 addNameBannerView:(id)arg2;
- (void)_suggestionsDidFinish:(id)arg1;
- (bool)_workQueue_isMeContactWithIdentifier:(id)arg1;
- (void)_workQueue_loadBannerIfNeededHasDismissedSuggestion:(bool)arg1 completion:(id /* block */)arg2;
- (void)_workQueue_loadContactSuggestionBannerForContactIdentifier:(id)arg1 suggestion:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)bannerViewDidSelectNotNow:(id)arg1;
- (void)bannerViewDidSelectPrimaryAction:(id)arg1;
- (void)dealloc;
- (void)didTapUnnamedPersonBanner:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (id)invalidationDelegate;
- (bool)isDismissed;
- (void)loadBannerView:(id /* block */)arg1;
- (id)loadedBannerView;
- (id)person;
- (id)presentationDelegate;
- (void)setInvalidationDelegate:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;

@end
