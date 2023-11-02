
@interface ENMLUtility : NSObject <NSXMLParserDelegate> {
    id /* block */  _completionBlock;
    KSHTMLWriter * _htmlWriter;
    NSMutableString * _outputHTML;
    NSArray * _resources;
    bool  _shouldIgnoreNextEndElement;
    bool  _shouldInlineResources;
    NSXMLParser * _xmlParser;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) KSHTMLWriter *htmlWriter;
@property (nonatomic, retain) NSMutableString *outputHTML;
@property (nonatomic, retain) NSArray *resources;
@property (nonatomic) bool shouldIgnoreNextEndElement;
@property (nonatomic) bool shouldInlineResources;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXMLParser *xmlParser;

+ (id)mediaTagWithDataHash:(id)arg1 mime:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)convertENMLToHTML:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)convertENMLToHTML:(id)arg1 withInlinedResources:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)convertENMLToHTML:(id)arg1 withReferencedResources:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)convertENMLToHTML:(id)arg1 withResources:(id)arg2 inlineResources:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)generateHTMLFromENML:(id)arg1 completion:(id /* block */)arg2;
- (void)generateHTMLFromENML:(id)arg1 inlinedResources:(id)arg2 completion:(id /* block */)arg3;
- (void)generateHTMLFromENML:(id)arg1 referencedResources:(id)arg2 completion:(id /* block */)arg3;
- (id)htmlWriter;
- (id)outputHTML;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 foundComment:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (id)resources;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setHtmlWriter:(id)arg1;
- (void)setOutputHTML:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setShouldIgnoreNextEndElement:(bool)arg1;
- (void)setShouldInlineResources:(bool)arg1;
- (void)setXmlParser:(id)arg1;
- (bool)shouldIgnoreNextEndElement;
- (bool)shouldInlineResources;
- (void)writeImageTagForResource:(id)arg1 withAttributes:(id)arg2;
- (void)writeResource:(id)arg1 withAttributes:(id)arg2;
- (void)writeTodoWithAttributes:(id)arg1;
- (id)xmlParser;

@end
