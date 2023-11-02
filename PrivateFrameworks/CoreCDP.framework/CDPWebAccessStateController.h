
@interface CDPWebAccessStateController : NSObject <CDPWebAccessStatusProvider, CDPWebAccessStatusUpdater>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)updateWebAccessStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)webAccessStatus:(id*)arg1;
- (void)webAccessStatusWithCompletion:(id /* block */)arg1;

@end
