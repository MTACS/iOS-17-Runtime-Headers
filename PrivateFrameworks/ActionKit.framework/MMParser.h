
@interface MMParser : NSObject {
    unsigned long long  _extensions;
    MMHTMLParser * _htmlParser;
    MMSpanParser * _spanParser;
}

@property (nonatomic, readonly) unsigned long long extensions;
@property (nonatomic, readonly) MMHTMLParser *htmlParser;
@property (nonatomic, readonly) MMSpanParser *spanParser;

- (void).cxx_destruct;
- (void)_addTextLineToElement:(id)arg1 withScanner:(id)arg2;
- (id)_parseBlockElementWithScanner:(id)arg1;
- (id)_parseBlockquoteWithScanner:(id)arg1;
- (id)_parseCodeBlockWithScanner:(id)arg1;
- (id)_parseCodeLinesWithScanner:(id)arg1;
- (id)_parseElementsWithScanner:(id)arg1;
- (id)_parseFencedCodeBlockWithScanner:(id)arg1;
- (id)_parseHTMLWithScanner:(id)arg1;
- (id)_parseHorizontalRuleWithScanner:(id)arg1;
- (id)_parseLinkDefinitionWithScanner:(id)arg1;
- (id)_parseListItemWithScanner:(id)arg1 listType:(long long)arg2;
- (bool)_parseListMarkerWithScanner:(id)arg1 listType:(long long)arg2;
- (id)_parseListWithScanner:(id)arg1;
- (id)_parseParagraphWithScanner:(id)arg1;
- (id)_parsePrefixHeaderWithScanner:(id)arg1;
- (id)_parseTableHeaderWithScanner:(id)arg1;
- (id)_parseTableRowWithScanner:(id)arg1 columns:(id)arg2;
- (id)_parseTableWithScanner:(id)arg1;
- (id)_parseUnderlinedHeaderWithScanner:(id)arg1;
- (id)_removeTabsFromString:(id)arg1;
- (void)_updateLinksFromDefinitionsInDocument:(id)arg1;
- (unsigned long long)extensions;
- (id)htmlParser;
- (id)initWithExtensions:(unsigned long long)arg1;
- (id)parseMarkdown:(id)arg1 error:(id*)arg2;
- (id)spanParser;

@end
