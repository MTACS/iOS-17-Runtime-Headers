
@protocol UITextSearching <NSObject>

@required

- (void)clearAllDecoratedFoundText;
- (long long)compareFoundRange:(UITextRange *)arg1 toRange:(UITextRange *)arg2 inDocument:(id <NSObject><NSCopying>)arg3;
- (void)decorateFoundTextRange:(UITextRange *)arg1 inDocument:(id <NSObject><NSCopying>)arg2 usingStyle:(long long)arg3;
- (void)performTextSearchWithQueryString:(NSString *)arg1 usingOptions:(UITextSearchOptions *)arg2 resultAggregator:(id <UITextSearchAggregator>)arg3;
- (UITextRange *)selectedTextRange;

@optional

- (long long)compareOrderFromDocument:(id <NSObject><NSCopying>)arg1 toDocument:(id <NSObject><NSCopying>)arg2;
- (void)replaceAllOccurrencesOfQueryString:(NSString *)arg1 usingOptions:(UITextSearchOptions *)arg2 withText:(NSString *)arg3;
- (void)replaceFoundTextInRange:(UITextRange *)arg1 inDocument:(id <NSObject><NSCopying>)arg2 withText:(NSString *)arg3;
- (void)scrollRangeToVisible:(UITextRange *)arg1 inDocument:(id <NSObject><NSCopying>)arg2;
- (<NSObject><NSCopying> *)selectedTextSearchDocument;
- (bool)shouldReplaceFoundTextInRange:(UITextRange *)arg1 inDocument:(id <NSObject><NSCopying>)arg2 withText:(NSString *)arg3;
- (bool)supportsTextReplacement;
- (void)willHighlightFoundTextRange:(UITextRange *)arg1 inDocument:(id <NSObject><NSCopying>)arg2;

@end
