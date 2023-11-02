
@interface SYLinkContextClient : NSObject <SYLinkContextClientProtocol> {
    NSObject<OS_dispatch_queue> * __clientQueue;
    NSXPCConnection * __connection;
    bool  __forTesting;
    SYNotesActivationObserver * __notesObserver;
    NSMutableSet * __pendingCreateLinkCompletionBlocks;
    NSMutableSet * __pendingFetchLinkCompletionBlocks;
    <SYLinkContextClientDelegate> * _delegate;
    id /* block */  _testingShouldSendCreateLinkRequest;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_clientQueue;
@property (nonatomic, retain) NSXPCConnection *_connection;
@property (nonatomic, readonly) bool _forTesting;
@property (nonatomic, retain) SYNotesActivationObserver *_notesObserver;
@property (nonatomic, readonly) NSMutableSet *_pendingCreateLinkCompletionBlocks;
@property (nonatomic, readonly) NSMutableSet *_pendingFetchLinkCompletionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SYLinkContextClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ testingShouldSendCreateLinkRequest;

- (void).cxx_destruct;
- (id)_clientQueue;
- (void)_configureConnectionAndResume;
- (id)_connection;
- (void)_createConnectionIfNeeded;
- (bool)_forTesting;
- (void)_invalidateConnection;
- (id)_linkContextDictionariesFromDataArray:(id)arg1 error:(id*)arg2;
- (id)_notesObserver;
- (id)_pendingCreateLinkCompletionBlocks;
- (id)_pendingFetchLinkCompletionBlocks;
- (void)_processFetchLinkContextsRequestForUserActivity:(id)arg1 serviceProxy:(id)arg2 completion:(id /* block */)arg3;
- (void)_sendInitialMessage;
- (void)_sendRequestToCreateLinkWithContentItemData:(id)arg1 preferNewDocument:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updateObserverAndCreateConnectionIfNeeded;
- (void)createAndShowContextualLinkWithUserActivity:(id)arg1 linkPreviewMetadata:(id)arg2 preferNewDocument:(bool)arg3 completion:(id /* block */)arg4;
- (void)createConnectionWithEndpoint:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fetchLinkContextsForUserActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initForTesting:(bool)arg1;
- (void)insertImagesData:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTestingShouldSendCreateLinkRequest:(id /* block */)arg1;
- (void)set_clientQueue:(id)arg1;
- (void)set_connection:(id)arg1;
- (void)set_notesObserver:(id)arg1;
- (id /* block */)testingShouldSendCreateLinkRequest;
- (oneway void)userDidRemoveContentItemDatas:(id)arg1;
- (oneway void)userEditDidAddContentItemDatas:(id)arg1;
- (oneway void)userWillAddLinkWithActivityData:(id)arg1 completion:(id /* block */)arg2;

@end
