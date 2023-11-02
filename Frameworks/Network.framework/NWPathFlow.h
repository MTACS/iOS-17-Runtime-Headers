
@interface NWPathFlow : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_path_flow> * _internalPathFlow;
}

@property (getter=isAssigned, nonatomic, readonly) bool assigned;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (getter=isDirect, nonatomic, readonly) bool direct;
@property (nonatomic, readonly) NSUUID *flowID;
@property (nonatomic, readonly) NWInterface *interface;
@property (readonly) NSObject<OS_nw_path_flow> *internalPathFlow;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly) NWEndpoint *localEndpoint;
@property (nonatomic, readonly) NSUUID *nexusAgent;
@property (nonatomic, readonly) NSUUID *nexusInstance;
@property (nonatomic, readonly) unsigned int nexusPort;
@property (nonatomic, readonly) NWEndpoint *remoteEndpoint;
@property (nonatomic, readonly) bool supportsIPv4;
@property (nonatomic, readonly) bool supportsIPv6;
@property (getter=isViable, nonatomic, readonly) bool viable;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)flowID;
- (id)initWithPathFlow:(id)arg1;
- (id)interface;
- (id)internalPathFlow;
- (bool)isAssigned;
- (bool)isDefunct;
- (bool)isDirect;
- (bool)isLocal;
- (bool)isViable;
- (id)localEndpoint;
- (id)nexusAgent;
- (id)nexusInstance;
- (unsigned int)nexusPort;
- (id)privateDescription;
- (id)remoteEndpoint;
- (bool)supportsIPv4;
- (bool)supportsIPv6;

@end
