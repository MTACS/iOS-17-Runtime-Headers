
@interface SWShareableContentExtractor : NSObject <SLDServiceProxyDelegate, SWShareableContentRepresentationProvider> {
    NSMutableArray * _pendingContentExtractionRequests;
    SLDServiceProxy * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *pendingContentExtractionRequests;
@property (nonatomic, retain) SLDServiceProxy *serviceProxy;
@property (readonly) Class superclass;

+ (id)_buildStartCollaborationURLForContentSceneIdentifier:(id)arg1 recipients:(id)arg2 faceTimeConversationUUID:(id)arg3;
+ (id)contentExtractorQueue;

- (void).cxx_destruct;
- (void)_addContentExtractionRequest:(id /* block */)arg1;
- (void)_processPendingContentExtractionRequests;
- (id)init;
- (void)initiateBackgroundCollaborationForContent:(id)arg1 faceTimeConversation:(id)arg2;
- (void)initiateBackgroundCollaborationForContent:(id)arg1 recipients:(id)arg2 faceTimeConversationUUID:(id)arg3;
- (void)loadRepresentationForContent:(id)arg1 typeIdentifier:(id)arg2 itemProviderIndex:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)pendingContentExtractionRequests;
- (void)presentMessageComposeSheetForContent:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteService;
- (void)retrieveShareableContentForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveShareableContentForSceneIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveShareableContentMatchingBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)retrieveShareableContentWithCompletion:(id /* block */)arg1;
- (id)serviceProxy;
- (void)serviceProxyDidConnect:(id)arg1;
- (void)serviceProxyDidDisconnect:(id)arg1;
- (void)setPendingContentExtractionRequests:(id)arg1;
- (void)setServiceProxy:(id)arg1;

@end
