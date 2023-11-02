
@interface WBSCompletionQuery : NSObject {
    NSSet * _cachedBagOfWords;
    bool  _forLastSearch;
    unsigned long long  _indexInFeedbackArray;
    NSString * _normalizedQueryStringForParsec;
    NSString * _parsecFeedbackQueryIdentifier;
    struct duration<long long, std::ratio<1, 1000>> { 
        long long __rep_; 
    }  _parsecLatency;
    NSURLRequest * _parsecSearchRequest;
    NSString * _profileIdentifierToFilterResults;
    long long  _queryID;
    NSArray * _queryItems;
    NSString * _queryString;
    NSString * _queryStringBeforeRewriting;
    NSArray * _querySuggestions;
    NSString * _rewrittenQueryStringFromParsec;
    NSString * _searchSuggestionProviderIdentifier;
    struct duration<long long, std::ratio<1, 1000>> { 
        long long __rep_; 
    }  _searchSuggestionProviderLatency;
    struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { 
        struct duration<long long, std::ratio<1, 1000000000>> { 
            long long __rep_; 
        } __d_; 
    }  _timestamp;
    unsigned long long  _triggerEvent;
}

@property (getter=isForLastSearch, nonatomic) bool forLastSearch;
@property (nonatomic) unsigned long long indexInFeedbackArray;
@property (nonatomic, readonly) NSString *normalizedQueryStringForParsec;
@property (nonatomic, copy) NSString *parsecFeedbackQueryIdentifier;
@property (nonatomic) /* Warning: unhandled struct encoding: '{duration<long long' */ struct  parsecLatency; /* unknown property attribute:  1000>>=q} */
@property (nonatomic, copy) NSURLRequest *parsecSearchRequest;
@property (nonatomic, copy) NSString *profileIdentifierToFilterResults;
@property (nonatomic, readonly) long long queryID;
@property (nonatomic, copy) NSArray *queryItems;
@property (nonatomic, readonly) NSString *queryString;
@property (nonatomic, readonly) NSString *queryStringBeforeRewriting;
@property (copy) NSArray *querySuggestions;
@property (nonatomic, copy) NSString *rewrittenQueryStringFromParsec;
@property (nonatomic, copy) NSString *searchSuggestionProviderIdentifier;
@property (nonatomic) /* Warning: unhandled struct encoding: '{duration<long long' */ struct  searchSuggestionProviderLatency; /* unknown property attribute:  1000>>=q} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{time_point<std::chrono::steady_clock' */ struct  timestamp; /* unknown property attribute:  1000000000>>=q}} */
@property (nonatomic) unsigned long long triggerEvent;

+ (long long)currentQueryID;
+ (id)recentAndSuggestedCompletionStringsByMergingRecentSearches:(id)arg1 withSuggestions:(id)arg2 literalSearch:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_bagOfWords;
- (id)_initWithQueryString:(id)arg1 queryID:(long long)arg2 timestamp:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg3 indexInFeedbackArray:(unsigned long long)arg4 triggerEvent:(unsigned long long)arg5;
- (id)_rangesOfMatchedTextInString:(id)arg1 offset:(unsigned long long)arg2;
- (id)description;
- (unsigned long long)indexInFeedbackArray;
- (id)init;
- (id)initWithNewQueryString:(id)arg1 queryBeforeRewriting:(id)arg2;
- (id)initWithQueryString:(id)arg1;
- (id)initWithQueryString:(id)arg1 queryID:(long long)arg2;
- (id)initWithQueryString:(id)arg1 queryID:(long long)arg2 triggerEvent:(unsigned long long)arg3;
- (id)initWithQueryString:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (bool)isForLastSearch;
- (id)normalizedQueryStringForParsec;
- (id)parsecFeedbackQueryIdentifier;
- (struct duration<long long, std::ratio<1, 1000>> { long long x1; })parsecLatency;
- (id)parsecSearchRequest;
- (id)profileIdentifierToFilterResults;
- (long long)queryID;
- (id)queryItems;
- (id)queryString;
- (id)queryStringBeforeRewriting;
- (id)querySuggestions;
- (id)rangesOfMatchedTextInTitle:(id)arg1 displayOnlyAddress:(id)arg2;
- (id)rangesToHighlightInSearchSuggestion:(id)arg1;
- (id)rewrittenQueryStringFromParsec;
- (id)searchSuggestionProviderIdentifier;
- (struct duration<long long, std::ratio<1, 1000>> { long long x1; })searchSuggestionProviderLatency;
- (void)setForLastSearch:(bool)arg1;
- (void)setIndexInFeedbackArray:(unsigned long long)arg1;
- (void)setParsecFeedbackQueryIdentifier:(id)arg1;
- (void)setParsecLatency:(struct duration<long long, std::ratio<1, 1000>> { long long x1; })arg1;
- (void)setParsecSearchRequest:(id)arg1;
- (void)setProfileIdentifierToFilterResults:(id)arg1;
- (void)setQueryItems:(id)arg1;
- (void)setQuerySuggestions:(id)arg1;
- (void)setRewrittenQueryStringFromParsec:(id)arg1;
- (void)setSearchSuggestionProviderIdentifier:(id)arg1;
- (void)setSearchSuggestionProviderLatency:(struct duration<long long, std::ratio<1, 1000>> { long long x1; })arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })timestamp;
- (unsigned long long)triggerEvent;

@end
