
@interface OZTemplateFlagXMLParser : NSObject <NSXMLParserDelegate> {
    bool  _foundTemplate;
    bool  _foundTemplateFlag;
    NSXMLParser * _parser;
    bool  _success;
    unsigned int  _templeFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int templeFlags;

- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (bool)parse;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (unsigned int)templeFlags;

@end
