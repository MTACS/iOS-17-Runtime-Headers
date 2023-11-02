
@interface WBSCloudHistoryServiceProxy : NSObject <WBSCloudHistoryServiceProtocol> {
    <NSXPCProxyCreating> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)arg1;
- (void)fetchAndMergeChangesBypassingThrottler:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id /* block */)arg1;
- (id)initWithProxy:(id)arg1;
- (void)resetForAccountChangeWithCompletionHandler:(id /* block */)arg1;
- (void)saveChangesBypassingThrottler:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateProfileLocalIdentifiersToServerIdentifiersMap:(id)arg1 completionHandler:(id /* block */)arg2;

@end
