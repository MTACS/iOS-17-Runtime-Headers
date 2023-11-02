
@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {
    <SBBannerUnfurlSourceContextProviding> * _bannerUnfurlSourceContextProvider;
    long long  _centerConfiguration;
    NSString * _centerWindowSourceSceneID;
    NSMutableArray * _completionTasks;
    bool  _crossingDisplays;
    bool  _shouldPreventDismissalOfUnrelatedTransientOverlays;
    bool  _shouldPreventEmergencyNotificationBannerDismissal;
    long long  _source;
    id /* block */  _transactionConfigurator;
    id /* block */  _transactionProvider;
}

@property (nonatomic, retain) <SBBannerUnfurlSourceContextProviding> *bannerUnfurlSourceContextProvider;
@property (nonatomic) long long centerConfiguration;
@property (nonatomic, retain) NSString *centerWindowSourceSceneID;
@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (getter=isCrossingDisplays, nonatomic) bool crossingDisplays;
@property (nonatomic) bool shouldPreventDismissalOfUnrelatedTransientOverlays;
@property (nonatomic) bool shouldPreventEmergencyNotificationBannerDismissal;
@property (nonatomic) long long source;
@property (nonatomic, copy) id /* block */ transactionConfigurator;
@property (nonatomic, copy) id /* block */ transactionProvider;
@property (nonatomic, readonly) SBMainWorkspace *workspace;

+ (id)ancillaryTransitionRequestsForTransitionRequest:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2;
- (void)_invalidateCompletionTasks;
- (id)addCompletionHandler:(id /* block */)arg1;
- (id)bannerUnfurlSourceContextProvider;
- (long long)centerConfiguration;
- (id)centerWindowSourceSceneID;
- (id)compactDescriptionBuilder;
- (id /* block */)completionBlock;
- (id)copyMainWorkspaceTransitionRequest;
- (void)dealloc;
- (void)declineWithReason:(id)arg1;
- (void)finalize;
- (id)initWithDisplayConfiguration:(id)arg1;
- (bool)isCrossingDisplays;
- (bool)isMainWorkspaceTransitionRequest;
- (void)modifyTransientOverlayContext:(id /* block */)arg1;
- (void)setBannerUnfurlSourceContextProvider:(id)arg1;
- (void)setCenterConfiguration:(long long)arg1;
- (void)setCenterWindowSourceSceneID:(id)arg1;
- (void)setCrossingDisplays:(bool)arg1;
- (void)setShouldPreventDismissalOfUnrelatedTransientOverlays:(bool)arg1;
- (void)setShouldPreventEmergencyNotificationBannerDismissal:(bool)arg1;
- (void)setSource:(long long)arg1;
- (void)setTransactionConfigurator:(id /* block */)arg1;
- (void)setTransactionProvider:(id /* block */)arg1;
- (void)setTransientOverlayContext:(id)arg1;
- (bool)shouldPreventDismissalOfUnrelatedTransientOverlays;
- (bool)shouldPreventEmergencyNotificationBannerDismissal;
- (long long)source;
- (id)succinctDescriptionBuilder;
- (id /* block */)transactionConfigurator;
- (id /* block */)transactionProvider;

@end
