
@interface DUXPCClient : NSObject <DUDocumentHarvestingProtocol> {
    DUXPCClientHelpers * _clientHelpers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)addSerializedDocument:(id)arg1 documentType:(long long)arg2 completion:(id /* block */)arg3;
- (void)foundInEventResultWithSerializedDocument:(id)arg1 documentType:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;

@end
