
@interface FCAppReviewRequestConfig : NSObject {
    long long  _minNumberOfCombinedActions;
    long long  _minNumberOfEndOfArticleReads;
    long long  _minNumberOfLikedArticles;
    long long  _minNumberOfSavedArticles;
    long long  _minNumberOfSharedArticles;
    long long  _quiescenceInterval;
}

@property (nonatomic, readonly) long long minNumberOfCombinedActions;
@property (nonatomic, readonly) long long minNumberOfEndOfArticleReads;
@property (nonatomic, readonly) long long minNumberOfLikedArticles;
@property (nonatomic, readonly) long long minNumberOfSavedArticles;
@property (nonatomic, readonly) long long minNumberOfSharedArticles;
@property (nonatomic, readonly) long long quiescenceInterval;

- (id)initWithDictionary:(id)arg1;
- (long long)minNumberOfCombinedActions;
- (long long)minNumberOfEndOfArticleReads;
- (long long)minNumberOfLikedArticles;
- (long long)minNumberOfSavedArticles;
- (long long)minNumberOfSharedArticles;
- (long long)quiescenceInterval;

@end
