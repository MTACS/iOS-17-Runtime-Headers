
@interface _EARPlsParser : NSObject <NSXMLParserDelegate> {
    NSString * _currentGrapheme;
    NSMutableSet * _currentPhonemes;
    NSMutableString * _elementValue;
    NSMutableDictionary * _lexemes;
    NSXMLParser * _parser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *lexemes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)lexemes;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end
