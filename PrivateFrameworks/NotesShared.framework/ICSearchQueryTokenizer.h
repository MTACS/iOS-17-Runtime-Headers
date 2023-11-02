
@interface ICSearchQueryTokenizer : NSObject

+ (void)_combineConnectorAndTokensAndRemoveDividersInPlaceForMutableTokenArray:(id)arg1 searchString:(id)arg2;
+ (id)_expandedTokensForSearchQuerySegmentArray:(id)arg1 searchString:(id)arg2 language:(id)arg3;
+ (void)_insertConnectorAndDividerSegmentsIntoMutableTokenArray:(id)arg1 searchString:(id)arg2;
+ (id)_queryTokensForSearchString:(id)arg1 language:(id)arg2;
+ (void)_sortMutableSearchQueryTokensInPlace:(id)arg1;
+ (id)connectorCharacterSet;
+ (id)expandedTokensForSearchString:(id)arg1 language:(id)arg2;
+ (id)nonConnectorCharacterSet;
+ (id)spellChecker;
+ (id)spellCheckerGuessesForSearchString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3;
+ (id)tokenizer;
+ (id)tokensFromString:(id)arg1 language:(id)arg2;

@end
