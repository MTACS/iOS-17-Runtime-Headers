
@interface PARSession : NSObject <SFAsyncResourceLoader, SFFeedbackListener> {
    PARSessionSwiftInternal * _internal;
}

@property (readonly) PARBag *bag;
@property (nonatomic, readonly) _TtC10CoreParsec15PARSearchClient *client;
@property (retain) PARSessionConfiguration *configuration;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property <PARSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3;
+ (id)sharedPARSessionWithConfiguration:(id)arg1;
+ (id)sharedSession;

- (void).cxx_destruct;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)addEngagedResults:(id)arg1;
- (void)addEngagedResults:(id)arg1 completion:(id /* block */)arg2;
- (void)allEngagedResultsForInput:(id)arg1 maxAmount:(long long)arg2 completion:(id /* block */)arg3;
- (id)bag;
- (id)cardLoader;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)clearEngagedResult:(id)arg1 completion:(id /* block */)arg2;
- (void)clearEngagedResults:(id)arg1 completion:(id /* block */)arg2;
- (void)clearEngagementsFromDate:(id)arg1 toDate:(id)arg2;
- (void)clearEngagementsWithTitle:(id)arg1 type:(id)arg2;
- (id)client;
- (id)configuration;
- (id)connection;
- (id)delegate;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didGoToSearch:(id)arg1;
- (void)didGoToSite:(id)arg1;
- (void)didGradeLookupHintRelevancy:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didPerformCommand:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)didSkipSearch:(int)arg1 forInput:(id)arg2 queryId:(unsigned long long)arg3;
- (void)didStartSearch:(id)arg1;
- (void)didSubmitUserReportFeedback:(id)arg1;
- (unsigned long long)enabledStatus;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(id /* block */)arg2;
- (id)imageLoader;
- (id)initInternal:(id)arg1 startImmediately:(bool)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 startImmediately:(bool)arg4;
- (id)internal;
- (bool)loadCard:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)loadImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)loadImage:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)loadMoreResults:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadTask:(id)arg1;
- (id)moreResultsLoader;
- (void)reportEvent:(id)arg1;
- (void)reportFeedback:(id)arg1;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)sendCBAEngagementFeedback:(id)arg1 query:(unsigned long long)arg2;
- (void)sendCustomFeedback:(id)arg1;
- (void)sendCustomFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)setBag:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)subscribeToChannel:(id)arg1 reply:(id /* block */)arg2;
- (void)subscriptionStatusForChannel:(id)arg1 reply:(id /* block */)arg2;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (id)taskWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)topEngagedResultsForInput:(id)arg1 maxAmount:(long long)arg2 completion:(id /* block */)arg3;
- (void)unsubscribeFromChannel:(id)arg1 reply:(id /* block */)arg2;
- (void)updateParametersForSmartSearchV1:(id)arg1 smartSearchV2:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_sharedParsecSession;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

+ (id)nt_sharedParsecSession;

@end
