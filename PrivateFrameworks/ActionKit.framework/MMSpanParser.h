
@interface MMSpanParser : NSObject {
    MMElement * _blockElement;
    NSMutableArray * _elements;
    unsigned long long  _extensions;
    MMHTMLParser * _htmlParser;
    NSMutableArray * _openElements;
    bool  _parseEm;
    bool  _parseImages;
    bool  _parseLinks;
    bool  _parseStrong;
}

@property (nonatomic, retain) MMElement *blockElement;
@property (nonatomic, retain) NSMutableArray *elements;
@property (nonatomic, readonly) unsigned long long extensions;
@property (nonatomic, readonly) MMHTMLParser *htmlParser;
@property (nonatomic, retain) NSMutableArray *openElements;
@property (nonatomic) bool parseEm;
@property (nonatomic) bool parseImages;
@property (nonatomic) bool parseLinks;
@property (nonatomic) bool parseStrong;

- (void).cxx_destruct;
- (id)_parseAmpersandWithScanner:(id)arg1;
- (bool)_parseAutolinkDomainWithScanner:(id)arg1;
- (id)_parseAutolinkEmailAddressWithScanner:(id)arg1;
- (void)_parseAutolinkPathWithScanner:(id)arg1;
- (id)_parseAutolinkURLWithScanner:(id)arg1;
- (id)_parseAutolinkWWWURLWithScanner:(id)arg1;
- (id)_parseAutomaticEmailLinkWithScanner:(id)arg1;
- (id)_parseAutomaticLinkWithScanner:(id)arg1;
- (id)_parseBackslashWithScanner:(id)arg1;
- (id)_parseCodeSpanWithScanner:(id)arg1;
- (id)_parseEmAndStrongWithScanner:(id)arg1;
- (id)_parseImageWithScanner:(id)arg1;
- (id)_parseInlineLinkWithScanner:(id)arg1;
- (id)_parseLeftAngleBracketWithScanner:(id)arg1;
- (id)_parseLineBreakWithScanner:(id)arg1;
- (id)_parseLinkTextBodyWithScanner:(id)arg1;
- (id)_parseLinkWithScanner:(id)arg1;
- (id)_parseNextElementWithScanner:(id)arg1;
- (id)_parseReferenceLinkWithScanner:(id)arg1;
- (id)_parseStrikethroughWithScanner:(id)arg1;
- (id)_parseWithScanner:(id)arg1 untilTestPasses:(id /* block */)arg2;
- (id)_stringWithBackslashEscapesRemoved:(id)arg1;
- (id)blockElement;
- (id)elements;
- (unsigned long long)extensions;
- (id)htmlParser;
- (id)initWithExtensions:(unsigned long long)arg1;
- (id)openElements;
- (bool)parseEm;
- (bool)parseImages;
- (bool)parseLinks;
- (id)parseSpansInBlockElement:(id)arg1 withScanner:(id)arg2;
- (id)parseSpansInTableColumns:(id)arg1 withScanner:(id)arg2;
- (bool)parseStrong;
- (void)setBlockElement:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setOpenElements:(id)arg1;
- (void)setParseEm:(bool)arg1;
- (void)setParseImages:(bool)arg1;
- (void)setParseLinks:(bool)arg1;
- (void)setParseStrong:(bool)arg1;

@end
