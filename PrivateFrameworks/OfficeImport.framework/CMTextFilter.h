
@interface CMTextFilter : NSObject

+ (id)convertLineBreaksToParagraphBreaks:(id)arg1;
+ (id)convertToVericalString:(id)arg1;
+ (id)covertFormatString:(id)arg1;
+ (id)filterHyperlinkField:(id)arg1;
+ (id)filterSpecialCodes:(id)arg1;
+ (id)filterToPreserveMultipleWhiteSpaces:(id)arg1;

- (id)init;

@end
