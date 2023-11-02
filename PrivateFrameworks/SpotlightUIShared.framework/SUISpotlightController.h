
@interface SUISpotlightController : NSObject {
    <SUISpotlightControllerSearchAppDelegate> * _appDelegate;
    SPClientSession * _clientSession;
    NSString * _currentSearchString;
    <SFFeedbackListener> * _feedbackDelegate;
    <SUISpotlightControllerResultsViewDelegate> * _resultsViewDelegate;
    <SUISpotlightControllerSearchFieldDelegate> * _searchFieldDelegate;
}

@property <SUISpotlightControllerSearchAppDelegate> *appDelegate;
@property (nonatomic, retain) SPClientSession *clientSession;
@property (nonatomic, retain) NSString *currentSearchString;
@property <SFFeedbackListener> *feedbackDelegate;
@property <SUISpotlightControllerResultsViewDelegate> *resultsViewDelegate;
@property <SUISpotlightControllerSearchFieldDelegate> *searchFieldDelegate;

- (void).cxx_destruct;
- (id)appDelegate;
- (id)clientSession;
- (id)currentSearchString;
- (id)feedbackDelegate;
- (id)init;
- (id)resultsViewDelegate;
- (id)searchFieldDelegate;
- (void)setAppDelegate:(id)arg1;
- (void)setClientSession:(id)arg1;
- (void)setCurrentSearchString:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setResultsViewDelegate:(id)arg1;
- (void)setSearchFieldDelegate:(id)arg1;
- (void)startQueryTaskWithSearchString:(id)arg1 queryOptions:(unsigned long long)arg2 sourceResult:(id)arg3 triggerEvent:(unsigned long long)arg4 languages:(id)arg5 currentKeyboardLanguage:(id)arg6 queryId:(unsigned long long)arg7;
- (void)updateWithCommand:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)updateWithSections:(id)arg1;
- (void)updateWithSuggestionResult:(id)arg1 triggerEvent:(unsigned long long)arg2 languages:(id)arg3 currentKeyboardLanguage:(id)arg4 queryId:(unsigned long long)arg5;

@end
