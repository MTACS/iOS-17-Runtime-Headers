
@interface DummyWebAccessStateController : NSObject <CDPWebAccessStatusProvider, CDPWebAccessStatusUpdater> {
    unsigned long long  webAccessStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (void)updateWebAccessStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)webAccessStatus:(id*)arg1;
- (void)webAccessStatusWithCompletion:(id /* block */)arg1;

@end
