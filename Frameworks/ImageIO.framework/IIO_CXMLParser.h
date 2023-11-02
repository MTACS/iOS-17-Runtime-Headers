
@interface IIO_CXMLParser : NSObject <NSXMLParserDelegate> {
    NSMutableArray * _dictionaryStack;
    id * _errorPointer;
    NSMutableString * _textInProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dictionaryForXMLData:(id)arg1 error:(id*)arg2;

- (id)initWithError:(id*)arg1;
- (id)initializeWithData:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;

@end
