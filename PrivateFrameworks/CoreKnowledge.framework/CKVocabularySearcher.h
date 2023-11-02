
@interface CKVocabularySearcher : NSObject {
    NSObject<CKVSearchService> * _searchService;
}

+ (void)initialize;
+ (id)makeSearcher;
+ (id)makeSearcherForUserId:(id)arg1;

- (void).cxx_destruct;
- (bool)_validateAppIds:(id)arg1 andAddToCriteria:(id)arg2;
- (bool)_validateCustomTypes:(id)arg1 andAddToCriteria:(id)arg2;
- (bool)_validateUtteranceTokens:(id)arg1;
- (id)init;
- (id)initWithSearchService:(id)arg1 userId:(id)arg2 prewarm:(bool)arg3;
- (id)matchSpansOfString:(id)arg1;
- (id)matchSpansOfUtterance:(id)arg1;
- (id)searchCustomVocabulary:(id)arg1 appIds:(id)arg2 vocabularyTypes:(id)arg3;
- (id)searchCustomVocabularyWithWildcardPatterns:(id)arg1 appIds:(id)arg2 vocabularyTypes:(id)arg3;

@end
