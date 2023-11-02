
@interface KSHTMLWriter : KSXMLWriter {
    NSMutableSet * _IDs;
    NSMutableArray * _classNames;
    NSString * _docType;
    bool  _isXHTML;
}

@property (nonatomic, copy) NSString *docType;

+ (bool)isDocTypeXHTML:(id)arg1;

- (void).cxx_destruct;
- (bool)canWriteElementInline:(id)arg1;
- (void)closeEmptyElementTag;
- (id)currentAttributes;
- (id)currentElementClassName;
- (id)docType;
- (bool)elementCanBeEmpty:(id)arg1;
- (void)endJavascriptCDATA;
- (bool)hasCurrentAttributes;
- (id)initWithOutputWriter:(id)arg1;
- (id)initWithOutputWriter:(id)arg1 docType:(id)arg2 encoding:(unsigned long long)arg3;
- (bool)isIDValid:(id)arg1;
- (bool)isXHTML;
- (void)pushAttribute:(id)arg1 value:(id)arg2;
- (void)pushClassName:(id)arg1;
- (void)setDocType:(id)arg1;
- (void)startAnchorElementWithHref:(id)arg1 title:(id)arg2 target:(id)arg3 rel:(id)arg4;
- (void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2;
- (void)startElement:(id)arg1 className:(id)arg2;
- (void)startElement:(id)arg1 idName:(id)arg2 className:(id)arg3;
- (void)startElement:(id)arg1 writeInline:(bool)arg2;
- (void)startJavascriptCDATA;
- (void)startJavascriptElementWithSrc:(id)arg1;
- (void)startStyleElementWithType:(id)arg1;
- (bool)topElementIsList;
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;
- (bool)validateElement:(id)arg1;
- (void)writeHTMLFormat:(id)arg1;
- (void)writeHTMLString:(id)arg1;
- (void)writeImageWithSrc:(id)arg1 alt:(id)arg2 width:(id)arg3 height:(id)arg4;
- (void)writeJavascript:(id)arg1 useCDATA:(bool)arg2;
- (void)writeJavascriptWithSrc:(id)arg1 charset:(id)arg2;
- (void)writeJavascriptWithSrc:(id)arg1 encoding:(unsigned long long)arg2;
- (void)writeLineBreak;
- (void)writeLinkToStylesheet:(id)arg1 title:(id)arg2 media:(id)arg3;
- (void)writeLinkWithHref:(id)arg1 type:(id)arg2 rel:(id)arg3 title:(id)arg4 media:(id)arg5;
- (void)writeParamElementWithName:(id)arg1 value:(id)arg2;
- (void)writeStyleElementWithCSSString:(id)arg1;

@end
