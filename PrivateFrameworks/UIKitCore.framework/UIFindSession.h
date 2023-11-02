
@interface UIFindSession : NSObject {
    bool  _allowsReplacement;
    UITextSearchOptions * _configuredSearchOptions;
    UIResponder * _divergentResponderForSession;
    UIFindInteraction * _parentInteraction;
    NSString * _replacementText;
    long long  _resultCount;
    long long  _searchResultDisplayStyle;
    NSString * _searchText;
    UIResponder * _searchableResponder;
}

@property (nonatomic, readonly) bool allowsReplacement;
@property (nonatomic, readonly) bool allowsReplacementForCurrentlyHighlightedResult;
@property (nonatomic, retain) UITextSearchOptions *configuredSearchOptions;
@property (nonatomic, readonly) UIResponder *divergentResponder;
@property (nonatomic, readonly) long long highlightedResultIndex;
@property (nonatomic) UIFindInteraction *parentInteraction;
@property (nonatomic, copy) NSString *replacementText;
@property (nonatomic, readonly) long long resultCount;
@property (nonatomic) long long searchResultDisplayStyle;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic) UIResponder *searchableResponder;
@property (nonatomic, readonly) UIView *searchableResponderAsView;
@property (nonatomic, readonly) bool supportsReplacement;

- (void).cxx_destruct;
- (bool)allowsReplacement;
- (bool)allowsReplacementForCurrentlyHighlightedResult;
- (id)configuredSearchOptions;
- (id)divergentResponder;
- (void)highlightNextResultInDirection:(long long)arg1;
- (long long)highlightedResultIndex;
- (void)invalidateFoundResults;
- (id)parentInteraction;
- (void)performSearchWithQuery:(id)arg1 options:(id)arg2;
- (void)performSingleReplacementWithSearchQuery:(id)arg1 replacementString:(id)arg2 options:(id)arg3;
- (void)replaceAllInstancesOfSearchQuery:(id)arg1 withReplacementString:(id)arg2 options:(id)arg3;
- (id)replacementText;
- (long long)resultCount;
- (long long)searchResultDisplayStyle;
- (id)searchText;
- (id)searchableResponder;
- (id)searchableResponderAsView;
- (void)setConfiguredSearchOptions:(id)arg1;
- (void)setParentInteraction:(id)arg1;
- (void)setReplacementText:(id)arg1;
- (void)setSearchResultDisplayStyle:(long long)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSearchableResponder:(id)arg1;
- (bool)supportsReplacement;

@end
