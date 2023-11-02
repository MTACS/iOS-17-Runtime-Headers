
@protocol _UITextSearching <NSObject>

@required

- (void)clearAllDecoratedFoundText;
- (long long)compareFoundRange:(UITextRange *)arg1 toRange:(UITextRange *)arg2 inDocument:(id <NSCoding><NSCopying>)arg3;
- (void)decorateFoundTextRange:(UITextRange *)arg1 inDocument:(id <NSCoding><NSCopying>)arg2 usingStyle:(unsigned long long)arg3;
- (void)performTextSearchWithQueryString:(NSString *)arg1 usingOptions:(_UITextSearchOptions *)arg2 resultAggregator:(id <_UITextSearchAggregator>)arg3;
- (UITextRange *)selectedTextRange;

@optional

- (long long)compareOrderFromDocument:(id <NSCoding><NSCopying>)arg1 toDocument:(id <NSCoding><NSCopying>)arg2;
- (void)didBeginTextSearchOperation;
- (void)didEndTextSearchOperation;
- (long long)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2 inDocument:(id <NSCoding><NSCopying>)arg3;
- (void)replaceAllOccurrencesOfQueryString:(NSString *)arg1 usingOptions:(_UITextSearchOptions *)arg2 withText:(NSString *)arg3;
- (void)replaceFoundTextInRange:(UITextRange *)arg1 inDocument:(id <NSCoding><NSCopying>)arg2 withText:(NSString *)arg3;
- (void)scrollRangeToVisible:(UITextRange *)arg1 inDocument:(id <NSCoding><NSCopying>)arg2;
- (long long)searchResultDisplayStyle;
- (<NSCoding><NSCopying> *)selectedTextSearchDocument;
- (bool)shouldBeginTextSearchOperation;
- (bool)shouldReplaceFoundTextInRange:(UITextRange *)arg1 inDocument:(id <NSCoding><NSCopying>)arg2 withText:(NSString *)arg3;
- (bool)supportsTextReplacement;
- (void)willHighlightFoundTextRange:(UITextRange *)arg1 inDocument:(id <NSCoding><NSCopying>)arg2;

@end
