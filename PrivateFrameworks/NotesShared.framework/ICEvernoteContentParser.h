
@interface ICEvernoteContentParser : NSObject <NSXMLParserDelegate> {
    NSMutableString * _bufferString;
    NSMutableString * _htmlString;
    NSXMLParser * _parser;
    unsigned long long  _parserType;
    bool  _shouldAppendCharactersToBuffer;
}

@property (nonatomic, retain) NSMutableString *bufferString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableString *htmlString;
@property (nonatomic, retain) NSXMLParser *parser;
@property (nonatomic) unsigned long long parserType;
@property (nonatomic) bool shouldAppendCharactersToBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bufferString;
- (id)htmlString;
- (id)htmlStringFromEvernoteContentString:(id)arg1;
- (void)parseContentString:(id)arg1;
- (id)parser;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (unsigned long long)parserType;
- (void)setBufferString:(id)arg1;
- (void)setHtmlString:(id)arg1;
- (void)setParser:(id)arg1;
- (void)setParserType:(unsigned long long)arg1;
- (void)setShouldAppendCharactersToBuffer:(bool)arg1;
- (bool)shouldAppendCharactersToBuffer;
- (bool)shouldSelfCloseTagForStartElementName:(id)arg1;
- (id)stringFromAttributes:(id)arg1;
- (void)teardownParser;
- (id)titleFromHTMLString:(id)arg1;

@end
