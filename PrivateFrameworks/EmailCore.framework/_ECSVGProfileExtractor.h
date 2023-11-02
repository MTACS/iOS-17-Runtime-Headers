
@interface _ECSVGProfileExtractor : NSObject <NSXMLParserDelegate> {
    NSString * _baseProfile;
    _Atomic bool  _hasParsed;
    NSString * _namespace;
    NSConditionLock * _parseLock;
    NSXMLParser * _parser;
    NSString * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_parseIfNeeded;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end
