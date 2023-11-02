
@interface RWIProtocolDOMNode : RWIProtocolJSONObject <APKRemoteInspectorNodeProtocol>

@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, copy) NSString *baseURL;
@property (nonatomic) int childNodeCount;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, retain) RWIProtocolDOMNode *contentDocument;
@property (nonatomic, copy) NSString *contentSecurityPolicyHash;
@property (nonatomic) long long customElementState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long depth;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *documentURL;
@property (nonatomic, copy) NSString *frameId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *layoutFlags;
@property (nonatomic, copy) NSString *localName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int nodeId;
@property (nonatomic, copy) NSString *nodeName;
@property (nonatomic) int nodeType;
@property (nonatomic, copy) NSString *nodeValue;
@property (nonatomic, copy) NSArray *pseudoElements;
@property (nonatomic) long long pseudoType;
@property (nonatomic, copy) NSString *publicId;
@property (nonatomic) long long shadowRootType;
@property (nonatomic, copy) NSArray *shadowRoots;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *systemId;
@property (nonatomic, retain) RWIProtocolDOMNode *templateContent;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *xmlVersion;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)attributes;
- (id)baseURL;
- (int)childNodeCount;
- (id)children;
- (id)contentDocument;
- (id)contentSecurityPolicyHash;
- (long long)customElementState;
- (id)documentURL;
- (id)frameId;
- (id)initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5;
- (id)layoutFlags;
- (id)localName;
- (id)name;
- (int)nodeId;
- (id)nodeName;
- (int)nodeType;
- (id)nodeValue;
- (id)pseudoElements;
- (long long)pseudoType;
- (id)publicId;
- (void)setAttributes:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setChildNodeCount:(int)arg1;
- (void)setChildren:(id)arg1;
- (void)setContentDocument:(id)arg1;
- (void)setContentSecurityPolicyHash:(id)arg1;
- (void)setCustomElementState:(long long)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setFrameId:(id)arg1;
- (void)setLayoutFlags:(id)arg1;
- (void)setLocalName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNodeId:(int)arg1;
- (void)setNodeName:(id)arg1;
- (void)setNodeType:(int)arg1;
- (void)setNodeValue:(id)arg1;
- (void)setPseudoElements:(id)arg1;
- (void)setPseudoType:(long long)arg1;
- (void)setPublicId:(id)arg1;
- (void)setShadowRootType:(long long)arg1;
- (void)setShadowRoots:(id)arg1;
- (void)setSystemId:(id)arg1;
- (void)setTemplateContent:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setXmlVersion:(id)arg1;
- (long long)shadowRootType;
- (id)shadowRoots;
- (id)systemId;
- (id)templateContent;
- (id)value;
- (id)xmlVersion;

// Image: /System/Library/PrivateFrameworks/AirPlayKit.framework/AirPlayKit

- (unsigned long long)depth;
- (id)description;
- (id)maximumIndexPathFromIndexPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_nodeFromDOMNode:(id)arg1;
+ (id)ik_nodeFromDOMNode:(id)arg1 depth:(int)arg2;
+ (id)safe_initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5;

- (id)ik_attributesDictionary;
- (id)ik_description;
- (void)ik_insertChild:(id)arg1 before:(id)arg2;
- (id)ik_nodeWithNodeId:(int)arg1;
- (void)ik_removeAttributeNamed:(id)arg1;
- (void)ik_removeChildWithId:(int)arg1;
- (void)ik_setAttributeValue:(id)arg1 name:(id)arg2;
- (void)ik_updateWithDOMNode:(id)arg1 dispatcher:(id)arg2;
- (void)ik_updateWithDOMNode:(id)arg1 fullfillChildren:(bool)arg2 dispatcher:(id)arg3;

@end