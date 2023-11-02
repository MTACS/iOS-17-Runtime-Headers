
@interface DummyWalrusStateController : NSObject <CDPWalrusStatusProvider, CDPWalrusStatusUpdater> {
    unsigned long long  walrusStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (void)updateWalrusStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)walrusStatus:(id*)arg1;
- (void)walrusStatusWithCompletion:(id /* block */)arg1;

@end
