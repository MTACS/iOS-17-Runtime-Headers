
@interface WPXMLRPCDecoder : NSObject <NSXMLParserDelegate> {
    NSData * _body;
    WPXMLRPCDecoderDelegate * _delegate;
    bool  _isFault;
    NSMutableString * _methodName;
    id  _object;
    NSData * _originalData;
    NSXMLParser * _parser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)abortParsing;
- (id)error;
- (long long)faultCode;
- (id)faultString;
- (id)initWithData:(id)arg1;
- (bool)isFault;
- (id)object;
- (void)parse;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;

@end
