
@interface FABuyStorageHook : NSObject <AAUIServerHook, ICQUICloudStorageOffersManagerDelegate> {
    id /* block */  _completion;
    <RUIServerHookDelegate> * _delegate;
    bool  _loadingStorage;
    ICQUICloudStorageOffersManager * _storageOffersManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completionWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_invokeBuyStorageWithServerAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
