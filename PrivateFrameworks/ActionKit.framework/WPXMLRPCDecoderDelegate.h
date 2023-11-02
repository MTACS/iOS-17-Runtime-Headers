
@interface WPXMLRPCDecoderDelegate : NSObject <NSXMLParserDelegate> {
    NSMutableArray * myChildren;
    NSString * myElementKey;
    int  myElementType;
    id  myElementValue;
    WPXMLRPCDecoderDelegate * myParent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addElementValueToParent;
- (id)elementKey;
- (int)elementType;
- (id)elementValue;
- (id)initWithParent:(id)arg1;
- (bool)isDictionaryElementType:(int)arg1;
- (id)parent;
- (id)parseBoolean:(id)arg1;
- (id)parseData:(id)arg1;
- (id)parseDate:(id)arg1;
- (id)parseDateString:(id)arg1 withFormat:(id)arg2;
- (id)parseDouble:(id)arg1;
- (id)parseInteger:(id)arg1;
- (id)parseString:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)setElementKey:(id)arg1;
- (void)setElementType:(int)arg1;
- (void)setElementValue:(id)arg1;
- (void)setParent:(id)arg1;

@end
