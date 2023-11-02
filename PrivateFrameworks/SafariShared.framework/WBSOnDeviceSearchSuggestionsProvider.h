
@interface WBSOnDeviceSearchSuggestionsProvider : NSObject {
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSString * _currentPrefix;
    <WBSOnDeviceSearchSuggestionsProviderDelegate> * _delegate;
    unsigned long long  _maximumNumberOfSuggestions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _prefixLock;
    WBSOnDeviceSearchSuggestionsModel * _searchModel;
}

@property (nonatomic) <WBSOnDeviceSearchSuggestionsProviderDelegate> *delegate;
@property (nonatomic) unsigned long long maximumNumberOfSuggestions;

- (void).cxx_destruct;
- (void)_doSearch:(id)arg1 atRootNode:(struct _WBSSearchSuggestionCandidate { unsigned int x1; unsigned int x2; bool x3; id x4; }*)arg2;
- (bool)_findRootNodeForPrefix:(id)arg1 rootNode:(struct _WBSSearchSuggestionCandidate { unsigned int x1; unsigned int x2; bool x3; id x4; }*)arg2;
- (id)_loadModel;
- (id)delegate;
- (id)init;
- (unsigned long long)maximumNumberOfSuggestions;
- (void)reloadModel;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNumberOfSuggestions:(unsigned long long)arg1;
- (void)setQueryString:(id)arg1;

@end
