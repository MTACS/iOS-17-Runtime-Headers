
@interface COMeshLocalNode : COMeshNode {
    NSSet * _acceptableCommands;
    NSDictionary * _commands;
    <COCompanionLinkClientFactoryProtocol> * _companionLinkClientFactory;
    NSSet * _ignoredIDSIdentifiers;
    unsigned short  _listeningPort;
    NSArray * _nodes;
    NSArray * _pendingActivation;
}

@property (nonatomic, copy) NSSet *acceptableCommands;
@property (nonatomic, copy) NSDictionary *commands;
@property (nonatomic, retain) <COCompanionLinkClientFactoryProtocol> *companionLinkClientFactory;
@property (nonatomic, readonly) NSSet *ignoredIDSIdentifiers;
@property (nonatomic, readonly) unsigned short listeningPort;
@property (nonatomic, copy) NSArray *nodes;
@property (nonatomic, readonly) NSArray *pendingActivation;

- (void).cxx_destruct;
- (id)IDSIdentifier;
- (id)_createNodeForDevice:(id)arg1 IDSIdentifier:(id)arg2 configure:(id /* block */)arg3;
- (void)_handleActivation:(id)arg1;
- (id)_handleDiscoveryRecord:(id)arg1;
- (void)_handleEventIdentifier:(id)arg1 rapportRepresentation:(id)arg2 options:(id)arg3 fromNode:(id)arg4;
- (void)_handleFoundDevice:(id)arg1;
- (void)_handleLostDevice:(id)arg1;
- (void)_handleLostNode:(id)arg1;
- (void)_handleRequestIdentifier:(id)arg1 rapportRepresentation:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4 fromNode:(id)arg5 at:(unsigned long long)arg6;
- (void)_invalidateAndReintroduceNode:(id)arg1;
- (id)_nodeForIDSIdentifier:(id)arg1;
- (void)_updateListeningPort:(id)arg1;
- (id)acceptableCommands;
- (void)activate;
- (id)commands;
- (id)companionLinkClientFactory;
- (id)ignoredIDSIdentifiers;
- (id)initWithCompanionLinkClient:(id)arg1 source:(id)arg2;
- (unsigned short)listeningPort;
- (id)nodes;
- (id)pendingActivation;
- (void)setAcceptableCommands:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setCompanionLinkClientFactory:(id)arg1;
- (void)setNodes:(id)arg1;

@end
