
@interface MUPlaceCardAnalyticsController : NSObject <MUInfoCardAnalyticsDelegate, MUPlaceModuleAnalyticsLogging> {
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    NSUUID * _cachedSessionId;
    bool  _deferLoggingRevealUntilRefinement;
    <GEOLogContextDelegate> * _logContextDelegate;
    <MUPlaceCardAnalyticsProvider> * _provider;
}

@property (nonatomic, readonly) NSArray *analyticModules;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deferLoggingRevealUntilRefinement;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOLogContextDelegate> *logContextDelegate;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (nonatomic, readonly) <MUPlaceCardAnalyticsProvider> *provider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6 modules:(id)arg7 actionRichProviderId:(id)arg8 completion:(id /* block */)arg9;
- (void)_requestHostToLogFeedbackTypeIfNeeded:(int)arg1;
- (id)analyticModules;
- (bool)deferLoggingRevealUntilRefinement;
- (void)disableDeferLoggingUntilRefinementWithShouldInvokeReveal:(bool)arg1;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 actionRichProviderId:(id)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 moduleMetadata:(id)arg6 feedbackDelegateSelector:(int)arg7 actionRichProviderId:(id)arg8;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4 actionRichProviderId:(id)arg5;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 moduleMetadata:(id)arg4 feedbackDelegateSelector:(int)arg5 actionRichProviderId:(id)arg6;
- (void)infoCardAnalyticsPopulateSharedStateWithButtonList:(id)arg1;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (id)initWithAnalyticsProvider:(id)arg1;
- (void)instrumentAction:(int)arg1 forModuleType:(long long)arg2 usingFeedbackType:(int)arg3;
- (void)instrumentAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 moduleType:(long long)arg4 feedbackType:(int)arg5;
- (void)instrumentCloseUsingClientType:(unsigned long long)arg1;
- (void)instrumentConceal;
- (void)instrumentDailyUsageCount;
- (void)instrumentPunchoutActionWithURL:(id)arg1 providerId:(id)arg2;
- (bool)instrumentRevealIfNeededWithImpressionsSessionId:(id)arg1;
- (void)instrumentVerticalScrollWithBeginningPoint:(struct CGPoint { double x1; double x2; })arg1 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (id)logContextDelegate;
- (id)placeItem;
- (id)provider;
- (void)setDisableDeferLoggingUntilRefinement;

@end
