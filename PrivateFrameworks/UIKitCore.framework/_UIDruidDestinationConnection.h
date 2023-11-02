
@interface _UIDruidDestinationConnection : NSObject <_DUIClientDestination, _DUIClientSessionDestination, _UIDruidDestinationConnection> {
    NSXPCConnection * _connection;
    id /* block */  _connectionBlock;
    id /* block */  _dragEndBlock;
    id /* block */  _dragPreviewProviderBlock;
    id /* block */  _dropPerformBlock;
    id /* block */  _handOffDroppedItemsBlock;
    id /* block */  _itemsAddedBlock;
    <_DUIServerSessionDestination> * _serverSession;
    unsigned int  _sessionIdentifier;
    long long  _state;
    bool  _systemPolicy;
}

@property (nonatomic, copy) id /* block */ connectionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dragEndBlock;
@property (nonatomic, copy) id /* block */ dragPreviewProviderBlock;
@property (nonatomic, copy) id /* block */ dropPerformBlock;
@property (nonatomic, copy) id /* block */ handOffDroppedItemsBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ itemsAddedBlock;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (getter=isSystemPolicy, nonatomic) bool systemPolicy;

- (void).cxx_destruct;
- (oneway void)addedItemCollection:(id)arg1;
- (void)connect;
- (id /* block */)connectionBlock;
- (void)dirtyItems:(id)arg1;
- (id /* block */)dragEndBlock;
- (oneway void)dragEnded;
- (id /* block */)dragPreviewProviderBlock;
- (id /* block */)dropPerformBlock;
- (void)enableKeyboardIfNeeded;
- (oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2;
- (id /* block */)handOffDroppedItemsBlock;
- (id)initWithSessionIdentifier:(unsigned int)arg1 systemPolicy:(bool)arg2;
- (bool)isSystemPolicy;
- (id /* block */)itemsAddedBlock;
- (oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 reply:(id /* block */)arg4;
- (oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(id /* block */)arg2;
- (void)requestDropWithOperation:(unsigned long long)arg1;
- (void)requestVisibleItems:(id /* block */)arg1;
- (void)sawDragEndEvent;
- (id)serverDestinationProxyWithErrorHandler:(id /* block */)arg1;
- (unsigned int)sessionIdentifier;
- (void)setConnectionBlock:(id /* block */)arg1;
- (void)setDragEndBlock:(id /* block */)arg1;
- (void)setDragPreviewProviderBlock:(id /* block */)arg1;
- (void)setDropPerformBlock:(id /* block */)arg1;
- (void)setHandOffDroppedItemsBlock:(id /* block */)arg1;
- (void)setItemsAddedBlock:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (void)setSystemPolicy:(bool)arg1;
- (long long)state;
- (void)takePotentialDrop:(id)arg1;

@end
