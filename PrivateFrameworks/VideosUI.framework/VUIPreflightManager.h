
@interface VUIPreflightManager : NSObject {
    bool  _contentAllowsCellularDownload;
    VUIContentRating * _contentRating;
    VUIExtrasInfo * _extrasInfo;
    VUIMediaEntity * _mediaEntity;
    NSObject<TVPMediaItem> * _mediaItem;
    NSObject<VUIControllerPresenter> * _presentingController;
    unsigned long long  _restrictionsCheckType;
    long long  _restrictionsState;
    id  _restrictionsValidationToken;
    id /* block */  _savedRestrictionsCompletion;
    VUIVideosPlayable * _videosPlayable;
}

@property (nonatomic) bool contentAllowsCellularDownload;
@property (nonatomic, retain) VUIContentRating *contentRating;
@property (nonatomic, retain) VUIExtrasInfo *extrasInfo;
@property (nonatomic, retain) VUIMediaEntity *mediaEntity;
@property (nonatomic, retain) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic, retain) NSObject<VUIControllerPresenter> *presentingController;
@property (nonatomic) unsigned long long restrictionsCheckType;
@property (nonatomic) long long restrictionsState;
@property (nonatomic, retain) id restrictionsValidationToken;
@property (nonatomic, copy) id /* block */ savedRestrictionsCompletion;
@property (nonatomic, retain) VUIVideosPlayable *videosPlayable;

+ (id)defaultPreflightManager;

- (void).cxx_destruct;
- (bool)_isAllowedToPlayOrPurchase;
- (bool)_isTrailer;
- (id)_lastAgeConfirmationPrompted;
- (long long)_lastConfirmedAge;
- (void)_logRatingsInfo:(id)arg1 maxAllowedRank:(id)arg2 ratingValue:(id)arg3;
- (void)_performAgeGateVerificationWithCompletion:(id /* block */)arg1;
- (void)_performRestrictionsCheckWithCompletion:(id /* block */)arg1;
- (void)_preflightDownloadWithCompletion:(id /* block */)arg1;
- (void)_preflightWithOptions:(long long)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)_ratingDomain;
- (id)_ratingValue;
- (long long)_requiredAgeForPlayback;
- (void)_setLastAgeConfirmationPrompted:(id)arg1;
- (void)_setLastConfirmedAge:(long long)arg1;
- (bool)_shouldShowAgeConfirmationAlert;
- (void)_showAgeConfirmationWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_showRestrictionsAlertForRatingDomain:(id)arg1 completion:(id /* block */)arg2;
- (bool)contentAllowsCellularDownload;
- (id)contentRating;
- (id)extrasInfo;
- (id)init;
- (id)mediaEntity;
- (id)mediaItem;
- (void)preflightWithOptions:(long long)arg1 completion:(id /* block */)arg2;
- (id)presentingController;
- (unsigned long long)restrictionsCheckType;
- (long long)restrictionsState;
- (id)restrictionsValidationToken;
- (id /* block */)savedRestrictionsCompletion;
- (void)setContentAllowsCellularDownload:(bool)arg1;
- (void)setContentRating:(id)arg1;
- (void)setExtrasInfo:(id)arg1;
- (void)setMediaEntity:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setPresentingController:(id)arg1;
- (void)setRestrictionsCheckType:(unsigned long long)arg1;
- (void)setRestrictionsState:(long long)arg1;
- (void)setRestrictionsValidationToken:(id)arg1;
- (void)setSavedRestrictionsCompletion:(id /* block */)arg1;
- (void)setVideosPlayable:(id)arg1;
- (id)videosPlayable;

@end
