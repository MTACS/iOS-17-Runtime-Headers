
@interface SPFeedbackManager : NSObject <SFFeedbackListener> {
    NSUserDefaults * _defaultsCenter;
    NSObject<OS_dispatch_queue> * _feedbackQueue;
    bool  _isParsecEnabled;
    bool  _needsToDisplayFirstTimeView;
    PARSession * _parsecFeedbackListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaultsCenter;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *feedbackQueue;
@property (readonly) unsigned long long hash;
@property bool isParsecEnabled;
@property bool needsToDisplayFirstTimeView;
@property (nonatomic, retain) PARSession *parsecFeedbackListener;
@property (readonly) Class superclass;

+ (void)bumpPriorityOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)flushFeedbackWithCompletion:(id /* block */)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_sendFeedback:(id)arg1 type:(long long)arg2;
- (void)_sendFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (id)defaultsCenter;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didPerformCommand:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (id)feedbackQueue;
- (id)init;
- (bool)isParsecEnabled;
- (bool)isParsecFeedbackEnabled;
- (bool)needsToDisplayFirstTimeView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)parsecFeedbackListener;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)setDefaultsCenter:(id)arg1;
- (void)setFeedbackQueue:(id)arg1;
- (void)setIsParsecEnabled:(bool)arg1;
- (void)setNeedsToDisplayFirstTimeView:(bool)arg1;
- (void)setParsecFeedbackListener:(id)arg1;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (void)updateNeedsToDisplayFirstTimeView;
- (void)updateParsecEnabled;

@end
