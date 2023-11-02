
@interface PSGExperimentResolver : NSObject {
    _PASLock * _responseSuggestionsConfigLock;
    TRIClient * _trialClient;
    _PASLock * _wordBoundaryConfigLock;
    NSDictionary * _wordBoundaryLangAndNamespaces;
    NSDictionary * _zkwLangAndNamespaces;
}

@property (nonatomic, readonly) NSDictionary *wordBoundaryLangAndNamespaces;
@property (nonatomic, readonly) NSDictionary *zkwLangAndNamespaces;

+ (id)sharedInstance;
+ (id)sharedWordBoundaryQueue;
+ (id)sharedZKWQueue;

- (void).cxx_destruct;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)arg1;
- (id)_getDefaultWordBoundarySuggestionsExperimentConfig:(id)arg1;
- (id)getResponseSuggestionsExperimentConfig:(id)arg1;
- (id)getResponseSuggestionsExperimentConfig:(id)arg1 shouldDownloadAssets:(bool)arg2;
- (id)getWordBoundarySuggestionsExperimentConfig:(id)arg1;
- (id)getWordBoundarySuggestionsExperimentConfig:(id)arg1 shouldDownloadAssets:(bool)arg2;
- (id)init;
- (void)warmupForLocale:(id)arg1;
- (id)wordBoundaryLangAndNamespaces;
- (id)zkwLangAndNamespaces;

@end
