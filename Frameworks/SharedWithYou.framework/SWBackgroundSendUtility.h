
@interface SWBackgroundSendUtility : NSObject <SFCollaborationCompositionDictionaryProviderDelegate, SLDServiceProxyDelegate> {
    id /* block */  _completion;
    SFCollaborationCompositionDictionaryProvider * _compositionDictionaryProvider;
    TUConversation * _faceTimeConversation;
    id /* block */  _pendingCollaborationRequest;
    NSObject<OS_dispatch_queue> * _queue;
    SLDServiceProxy * _serviceProxy;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) SFCollaborationCompositionDictionaryProvider *compositionDictionaryProvider;
@property (nonatomic, retain) TUConversation *faceTimeConversation;
@property (nonatomic, copy) id /* block */ pendingCollaborationRequest;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) SLDServiceProxy *serviceProxy;

- (void).cxx_destruct;
- (void)_addCollaborationRequest:(id /* block */)arg1;
- (void)_processPendingCollaborationRequest;
- (id /* block */)completion;
- (id)compositionDictionaryProvider;
- (void)dictionaryDidBecomeAvailable:(id)arg1 forProvider:(id)arg2;
- (id)faceTimeConversation;
- (id)initWithItemProvider:(id)arg1 faceTimeConversation:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)pendingCollaborationRequest;
- (id)queue;
- (id)remoteService;
- (void)sendCollaboration:(id)arg1 faceTimeConversationUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serviceProxy;
- (void)serviceProxyDidConnect:(id)arg1;
- (void)serviceProxyDidDisconnect:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCompositionDictionaryProvider:(id)arg1;
- (void)setFaceTimeConversation:(id)arg1;
- (void)setPendingCollaborationRequest:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceProxy:(id)arg1;

@end
