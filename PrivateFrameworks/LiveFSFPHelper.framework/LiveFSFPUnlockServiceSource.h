
@interface LiveFSFPUnlockServiceSource : NSObject <LiveFSUnlock, NSFileProviderServiceSource, NSXPCListenerDelegate> {
    LiveFSFPExtensionHelper * _fileProviderExtension;
    NSString * _itemIdentifier;
    NSHashTable * _listeners;
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)makeListenerEndpointAndReturnError:(id*)arg1;
- (id)serviceName;
- (void)unlockWithPassword:(id)arg1 saveToKeychain:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
