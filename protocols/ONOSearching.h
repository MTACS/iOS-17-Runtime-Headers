
@protocol ONOSearching

@required

- (<NSFastEnumeration> *)CSS:(NSString *)arg1;
- (<NSFastEnumeration> *)XPath:(NSString *)arg1;
- (void)enumerateElementsWithCSS:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ONOXMLElement *, void*
- (void)enumerateElementsWithCSS:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ONOXMLElement *, unsigned long long, bool*, void*
- (void)enumerateElementsWithXPath:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ONOXMLElement *, void*
- (void)enumerateElementsWithXPath:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ONOXMLElement *, unsigned long long, bool*, void*
- (ONOXMLElement *)firstChildWithCSS:(NSString *)arg1;
- (ONOXMLElement *)firstChildWithXPath:(NSString *)arg1;
- (ONOXPathFunctionResult *)functionResultByEvaluatingXPath:(NSString *)arg1;

@end
