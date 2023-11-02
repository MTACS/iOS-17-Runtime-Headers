
@interface MMHTMLParser : NSObject

- (bool)_parseAttributeValueWithScanner:(id)arg1;
- (void)_parseAttributesWithScanner:(id)arg1;
- (bool)_parseEndTag:(id)arg1 withScanner:(id)arg2;
- (id)_parseLenientBlockTagWithScanner:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_parseNameWithScanner:(id)arg1;
- (id)_parseStrictBlockTagWithScanner:(id)arg1;
- (bool)_parseStringWithScanner:(id)arg1;
- (id)parseBlockTagWithScanner:(id)arg1;
- (id)parseCommentWithScanner:(id)arg1;
- (id)parseInlineTagWithScanner:(id)arg1;

@end
