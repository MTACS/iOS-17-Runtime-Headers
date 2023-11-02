
@interface XRXMLParser : NSObject <NSXMLParserDelegate> {
    <XRXMLParserDelegate> * _delegate;
    bool  _delegateWantsFinishedCB;
    <XRIssueResponder> * _issueResponder;
    NSXMLParser * _parser;
    XRXMLElementParser * _topLevelElementParser;
    XRXMLElementParser * _workingElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <XRXMLParserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <XRIssueResponder> *issueResponder;
@property (readonly) Class superclass;

+ (id)commonXMLSchemaRepositoryURL;
+ (bool)parseStream:(id)arg1 topLevelParser:(id)arg2 delegate:(id)arg3;

- (void).cxx_destruct;
- (id)delegate;
- (void)finishedParsing;
- (id)init;
- (id)initWithTopLevelParser:(id)arg1;
- (id)issueResponder;
- (bool)parseData:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIssueResponder:(id)arg1;

@end
