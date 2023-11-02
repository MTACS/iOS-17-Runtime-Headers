
@interface EMFQueryResult : NSObject {
    NSArray * _documentMatches;
    NSDictionary * _matchingDocumentWeights;
    EMFQuery * _query;
    EMFQueryResultOverride * _resultOverride;
    NSOrderedSet * _sortedResultSet;
}

@property (nonatomic, readonly) NSArray *documentMatches;
@property (nonatomic, readonly) NSDictionary *matchingDocumentWeights;
@property (nonatomic, readonly) EMFQuery *query;
@property (nonatomic, readonly, copy) EMFQueryResultOverride *resultOverride;

+ (id)_emojiStringForDocumentID:(id)arg1 usingLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2;
+ (struct __EmojiTokenWrapper { }*)_emojiTokenForDocumentID:(id)arg1 usingLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2;

- (void).cxx_destruct;
- (id)_handleOverrideResultInterpolationForStandardResults:(id)arg1;
- (id)_interpolateOverriddenResultsByAppending:(id)arg1;
- (id)_interpolateOverriddenResultsByAppendingAndMoving:(id)arg1;
- (id)_interpolateOverriddenResultsByFiltering:(id)arg1;
- (id)_interpolateOverriddenResultsByOverwriting;
- (id)_interpolateOverriddenResultsByPrepending:(id)arg1;
- (bool)_matchingDocumentWeightsContainsOnlyBlackLivesMatterResults;
- (id)description;
- (id)documentMatches;
- (id)emojiMatchesAndDocumentWeightsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg1;
- (id)emojiMatchesForOverriddenResultsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg1;
- (id)emojiStringMatchesUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg1;
- (id)initWithQuery:(id)arg1 andMatchingDocumentWeights:(id)arg2;
- (id)initWithQuery:(id)arg1 matchingDocumentWeights:(id)arg2 resultOverride:(id)arg3;
- (id)matchingDocumentWeights;
- (id)query;
- (id)resultOverride;

@end
