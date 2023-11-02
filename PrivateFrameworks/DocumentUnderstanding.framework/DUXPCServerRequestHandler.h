
@interface DUXPCServerRequestHandler : NSObject <DUDocumentHarvestingProtocol> {
    _PASBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <DUDocumentHarvestingProtocol> * _clientProxy;
    _TtC21DocumentUnderstanding24TextUnderstandingManager * _textUnderstandingManager;
}

@property (nonatomic, retain) _PASBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)addSerializedDocument:(id)arg1 documentType:(long long)arg2 completion:(id /* block */)arg3;
- (id)bundleIdResolver;
- (id)clientProcessName;
- (void)foundInEventResultWithSerializedDocument:(id)arg1 documentType:(long long)arg2 completion:(id /* block */)arg3;
- (id)initWithManager:(id)arg1;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;

@end
