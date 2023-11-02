
@interface MUPlaceUnifiedActionRowSectionControllerConfiguration : NSObject {
    MKPlaceActionManager * _actionManager;
    <MUPlaceActionRowMenuProvider> * _actionRowMenuProvider;
    MUAMSResultProvider * _amsResultProvider;
    MUTimeExpirableLRUCache * _artworkCache;
    GEOUnifiedActionButtonModuleConfiguration * _buttonModuleConfiguration;
    bool  _canShowDetourTime;
    bool  _canShowDownloadOffline;
    MKETAProvider * _etaProvider;
    <MUExternalActionHandling> * _externalActionHandler;
    bool  _isSearchAlongRoute;
    <MUHeaderButtonMenuActionProvider> * _moreActionsProvider;
    unsigned long long  _primaryButtonType;
    _MKPlaceActionButtonController * _secondaryActionButtonController;
    bool  _shouldPerformMapsExtensionDiscovery;
    bool  _shouldPromoteDownloadOffline;
    bool  _shouldShowContactsAction;
    bool  _showMoreButtonIfAvailable;
}

@property (nonatomic) MKPlaceActionManager *actionManager;
@property (nonatomic) <MUPlaceActionRowMenuProvider> *actionRowMenuProvider;
@property (nonatomic, retain) MUAMSResultProvider *amsResultProvider;
@property (nonatomic, retain) MUTimeExpirableLRUCache *artworkCache;
@property (nonatomic, retain) GEOUnifiedActionButtonModuleConfiguration *buttonModuleConfiguration;
@property (nonatomic) bool canShowDetourTime;
@property (nonatomic) bool canShowDownloadOffline;
@property (nonatomic) MKETAProvider *etaProvider;
@property (nonatomic) <MUExternalActionHandling> *externalActionHandler;
@property (nonatomic) bool isSearchAlongRoute;
@property (nonatomic) <MUHeaderButtonMenuActionProvider> *moreActionsProvider;
@property (nonatomic) unsigned long long primaryButtonType;
@property (nonatomic, retain) _MKPlaceActionButtonController *secondaryActionButtonController;
@property (nonatomic) bool shouldPerformMapsExtensionDiscovery;
@property (nonatomic) bool shouldPromoteDownloadOffline;
@property (nonatomic) bool shouldShowContactsAction;
@property (nonatomic) bool showMoreButtonIfAvailable;

- (void).cxx_destruct;
- (id)actionManager;
- (id)actionRowMenuProvider;
- (id)amsResultProvider;
- (id)artworkCache;
- (id)buttonModuleConfiguration;
- (bool)canShowDetourTime;
- (bool)canShowDownloadOffline;
- (id)etaProvider;
- (id)externalActionHandler;
- (bool)isSearchAlongRoute;
- (id)moreActionsProvider;
- (unsigned long long)primaryButtonType;
- (id)secondaryActionButtonController;
- (void)setActionManager:(id)arg1;
- (void)setActionRowMenuProvider:(id)arg1;
- (void)setAmsResultProvider:(id)arg1;
- (void)setArtworkCache:(id)arg1;
- (void)setButtonModuleConfiguration:(id)arg1;
- (void)setCanShowDetourTime:(bool)arg1;
- (void)setCanShowDownloadOffline:(bool)arg1;
- (void)setEtaProvider:(id)arg1;
- (void)setExternalActionHandler:(id)arg1;
- (void)setIsSearchAlongRoute:(bool)arg1;
- (void)setMoreActionsProvider:(id)arg1;
- (void)setPrimaryButtonType:(unsigned long long)arg1;
- (void)setSecondaryActionButtonController:(id)arg1;
- (void)setShouldPerformMapsExtensionDiscovery:(bool)arg1;
- (void)setShouldPromoteDownloadOffline:(bool)arg1;
- (void)setShouldShowContactsAction:(bool)arg1;
- (void)setShowMoreButtonIfAvailable:(bool)arg1;
- (bool)shouldPerformMapsExtensionDiscovery;
- (bool)shouldPromoteDownloadOffline;
- (bool)shouldShowContactsAction;
- (bool)showMoreButtonIfAvailable;

@end
