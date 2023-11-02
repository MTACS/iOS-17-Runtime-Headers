
@interface MUGroupedExternalActionController : NSObject {
    <MUExternalActionHandling> * _actionHandler;
    MUAMSResultProvider * _amsResultProvider;
    <MUExternalActionAnalyticsHandling> * _analyticsHandler;
    long long  _analyticsModuleType;
    MUPlaceExtensionDiscoveryManager * _extensionDiscoveryManager;
    GEOPlaceExternalAction * _externalAction;
    int  _multipleVendorAnalyticsTarget;
    int  _singleVendorAnalyticsTarget;
    long long  _source;
    bool  _supportsMultipleVendorSelection;
    MUVendorLinkSorter * _vendorLinkSorter;
    NSArray * _viewModels;
}

@property (nonatomic) long long analyticsModuleType;
@property (nonatomic, readonly) GEOPlaceExternalAction *externalAction;
@property (nonatomic, readonly) bool hasMultipleVendorsForAnalytics;
@property (nonatomic) int multipleVendorAnalyticsTarget;
@property (nonatomic, readonly) int resolvedAnalyticsTarget;
@property (nonatomic) int singleVendorAnalyticsTarget;
@property (nonatomic) long long source;
@property (nonatomic, readonly) bool supportsMultipleVendorSelection;

- (void).cxx_destruct;
- (void)_executeBestIntegrationForProvider:(id)arg1 index:(unsigned long long)arg2;
- (void)_openMapsExtensionUsingExtensionParams:(id)arg1 handlingOptions:(id)arg2;
- (id)_viewModelsWithSortApplied;
- (long long)analyticsModuleType;
- (void)captureGroupedMenuRevealAnalyticsIfNeededWithIsQuickAction:(bool)arg1;
- (id)externalAction;
- (void)fetchProviderLockupsWithCompletion:(id /* block */)arg1;
- (bool)hasMultipleVendorsForAnalytics;
- (id)initWithGroupedExternalAction:(id)arg1 amsResultProvider:(id)arg2 supportsMultipleVendorSelection:(bool)arg3 actionHandler:(id)arg4 analyticsHandler:(id)arg5;
- (int)multipleVendorAnalyticsTarget;
- (void)openFirstPartnerAction;
- (void)openPartnerActionUsingViewModel:(id)arg1;
- (int)resolvedAnalyticsTarget;
- (void)setAnalyticsModuleType:(long long)arg1;
- (void)setMultipleVendorAnalyticsTarget:(int)arg1;
- (void)setSingleVendorAnalyticsTarget:(int)arg1;
- (void)setSource:(long long)arg1;
- (int)singleVendorAnalyticsTarget;
- (long long)source;
- (bool)supportsMultipleVendorSelection;

@end
