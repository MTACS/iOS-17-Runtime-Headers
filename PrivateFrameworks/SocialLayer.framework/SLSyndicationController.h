
@interface SLSyndicationController : NSObject <SLDServiceProxyDelegate> {
    NSMutableSet * _pendingmessageGUIDsToRemove;
    SLDServiceProxy * _syndicationServiceProxy;
}

@property (nonatomic, retain) NSMutableSet *pendingmessageGUIDsToRemove;
@property (nonatomic, retain) SLDServiceProxy *syndicationServiceProxy;

+ (id)sharedController;
+ (id)syndicationProcessingQueue;

- (void).cxx_destruct;
- (void)_disconnectSyndicationServiceConnectionIfNecessary;
- (void)_sendCurrentRemovalsToDaemonAndDisconnect;
- (id)pendingmessageGUIDsToRemove;
- (void)removeMessageGUIDFromSyndication:(id)arg1;
- (void)serviceProxyDidConnect:(id)arg1;
- (void)serviceProxyDidDisconnect:(id)arg1;
- (void)setPendingmessageGUIDsToRemove:(id)arg1;
- (void)setSyndicationServiceProxy:(id)arg1;
- (id)syndicationServiceProxy;

@end
