
@protocol APKRemoteInspectorNodeProtocol <NSObject>

@required

- (NSArray *)attributes;
- (int)childNodeCount;
- (NSArray *)children;
- (unsigned long long)depth;
- (NSString *)description;
- (NSString *)documentURL;
- (NSString *)frameId;
- (NSString *)localName;
- (int)nodeId;
- (NSString *)nodeName;
- (int)nodeType;
- (NSString *)nodeValue;
- (void)setAttributes:(NSArray *)arg1;
- (void)setChildNodeCount:(int)arg1;
- (void)setChildren:(NSArray *)arg1;
- (void)setDocumentURL:(NSString *)arg1;
- (void)setFrameId:(NSString *)arg1;
- (void)setLocalName:(NSString *)arg1;
- (void)setNodeId:(int)arg1;
- (void)setNodeName:(NSString *)arg1;
- (void)setNodeType:(int)arg1;
- (void)setNodeValue:(NSString *)arg1;
- (void)setXmlVersion:(NSString *)arg1;
- (NSString *)xmlVersion;

@end
