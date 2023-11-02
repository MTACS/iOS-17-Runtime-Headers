
@interface SLDShareableContentService : NSObject <SLDService, SLDShareableContentServiceProtocol> {
    NSUserActivity * _activity;
    bool  _isLayoutMonitorReady;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _retrieveShareableContentBlock;
}

@property (nonatomic, retain) NSUserActivity *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLayoutMonitorReady;
@property (nonatomic, readonly) FBSDisplayLayoutMonitor *layoutMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ retrieveShareableContentBlock;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (void)setupInterface:(id)arg1;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)_applicationIdentifierForConnection:(id)arg1;
- (bool)_connShouldAllowBackgroundCollaboration:(id)arg1;
- (id)activity;
- (bool)allowsConnection:(id)arg1;
- (void)dealloc;
- (void)fetchShareableContentFromSourceIdentifier:(id)arg1 requestedTypeIdentifier:(id)arg2 requestedItemProviderIndex:(long long)arg3 responseHandler:(id /* block */)arg4;
- (id)init;
- (bool)isLayoutMonitorReady;
- (void)launchApplicationWithBundleIdentifier:(id)arg1 forActions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)layoutMonitor;
- (void)loadRepresentationFromSourceIdentifier:(id)arg1 requestedTypeIdentifier:(id)arg2 requestedItemProviderIndex:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)performAction:(id)arg1 onApplicationWithBundleIdentifier:(id)arg2;
- (bool)populateInitiatorMetadata:(id)arg1 name:(id)arg2 email:(id)arg3;
- (void)populateInitiatorMetadata:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentMessageComposeSheetForSourceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (id /* block */)retrieveShareableContentBlock;
- (void)retrieveShareableContentMetadataMatchingBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setActivity:(id)arg1;
- (void)setIsLayoutMonitorReady:(bool)arg1;
- (void)setRetrieveShareableContentBlock:(id /* block */)arg1;
- (void)shareCollaborationData:(id)arg1 faceTimeConversationUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)visibleApplicationForSourceIdentifier:(id)arg1;
- (id)visibleApplications;

@end
