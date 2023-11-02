
@interface SLDRemoteRenderingService : NSObject <SLDService> {
    NSMapTable * _connectionViewIDs;
    NSMapTable * _viewIDConnections;
    NSMapTable * _viewIdentifierMap;
    NSMutableArray * _viewLRUCache;
}

@property (nonatomic, retain) NSMapTable *connectionViewIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *viewIDConnections;
@property (nonatomic, retain) NSMapTable *viewIdentifierMap;
@property (nonatomic, retain) NSMutableArray *viewLRUCache;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)_allConnectionsDisconnected;
- (void)_connection:(id)arg1 doesNotNeedViewWithIdentifier:(id)arg2;
- (void)_connection:(id)arg1 onlyNeedsViewWithIdentifier:(id)arg2;
- (void)_connectionTouchedView:(id)arg1;
- (void)_destroyViewWithID:(id)arg1;
- (bool)_hasConnections;
- (id)_remoteContentForViewIdentifier:(id)arg1 layerContextID:(unsigned long long)arg2 connection:(id)arg3;
- (id)_viewIDForStyle:(id)arg1 tag:(id)arg2;
- (id)connectionViewIDs;
- (id)init;
- (void)lostConnection:(id)arg1;
- (void)receivedConnection:(id)arg1;
- (void)setConnectionViewIDs:(id)arg1;
- (void)setViewIDConnections:(id)arg1;
- (void)setViewIdentifierMap:(id)arg1;
- (void)setViewLRUCache:(id)arg1;
- (id)slotMachineForViewIdentifier:(id)arg1;
- (id)viewIDConnections;
- (id)viewIdentifierMap;
- (id)viewLRUCache;

@end
