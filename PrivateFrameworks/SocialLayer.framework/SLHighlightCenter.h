
@interface SLHighlightCenter : NSObject <SLHighlightCacheDelegate> {
    <SLHighlightCenterAPIAdapting> * _apiAdapterDelegate;
    <SLHighlightCenterDelegate> * _delegate;
    NSArray * _highlights;
    SLHighlightsCache * _highlightsCache;
    SLInteractionHandler * _interactionHandler;
    int  _notificationTokenAppSettingsChanges;
    int  _notificationTokenSettingsChanges;
    NSString * _variant;
}

@property (nonatomic, readonly) <SLHighlightCenterAPIAdapting> *apiAdapterDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double decay;
@property (nonatomic) <SLHighlightCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *highlights;
@property (nonatomic, retain) SLHighlightsCache *highlightsCache;
@property (nonatomic, readonly) double highlightsRankingScore;
@property (nonatomic, retain) SLInteractionHandler *interactionHandler;
@property (nonatomic, readonly) NSDate *latestHighlightDate;
@property (nonatomic, readonly) int notificationTokenAppSettingsChanges;
@property (nonatomic, readonly) int notificationTokenSettingsChanges;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *variant;

+ (id)SLVariantDefault;
+ (id)SLVariantNewsToday;
+ (bool)_bundleIDExistsInPreferences:(id)arg1;
+ (void)_checkAndInitializeBundleIDToAppPreferences:(id)arg1;
+ (bool)_isShareWithYouEnabled;
+ (bool)_isShareWithYouOnboarded;
+ (id)displayName;
+ (id)highlightCenterQueue;
+ (bool)isAutomaticSharingEnabled;
+ (bool)isEnabled;
+ (id)rapportClient;
+ (bool)shouldShowOnboardingShieldView;
+ (void)shouldShowOnboardingShieldViewForNearbyDevice:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_fetchHighlightsWithLimit:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (id)_initWithAppIdentifier:(id)arg1 apiAdapterDelegate:(id)arg2;
- (void)_legacyNotifyDelegateDidAddHighlights;
- (void)_legacyNotifyDelegateDidRemoveHighlights:(id)arg1;
- (void)_notifyAPIAdapterDelegateHighlightsChanged;
- (void)_registerNotifications;
- (id)apiAdapterDelegate;
- (void)appEnablementStateChanged;
- (id)appIdentifierForHighlightsCache;
- (void)dealloc;
- (double)decay;
- (id)delegate;
- (id)displayName;
- (void)enablementStateChanged;
- (void)feedbackForHighlight:(id)arg1 withType:(unsigned long long)arg2;
- (void)feedbackForHighlight:(id)arg1 withType:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (id)fetchAttributionForAttributionIdentifier:(id)arg1;
- (id)fetchAttributionsForHighlight:(id)arg1;
- (void)fetchHighlights:(id /* block */)arg1;
- (void)fetchHighlightsWithLimit:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (id)highlights;
- (id)highlightsCache;
- (void)highlightsChanged;
- (double)highlightsRankingScore;
- (id)init;
- (id)initWithAppIdentifier:(id)arg1;
- (id)initWithAppIdentifier:(id)arg1 apiAdapterDelegate:(id)arg2;
- (id)interactionHandler;
- (id)latestHighlightDate;
- (void)legacyDidAddHighlights;
- (void)legacyDidRemoveHighlights:(id)arg1;
- (int)notificationTokenAppSettingsChanges;
- (int)notificationTokenSettingsChanges;
- (void)runAfterInitialFetch:(id /* block */)arg1 onQueue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHighlightsCache:(id)arg1;
- (void)setInteractionHandler:(id)arg1;
- (void)setVariant:(id)arg1;
- (void)updateHighlights;
- (id)variant;
- (id)variantForHighlightsCache;

@end
