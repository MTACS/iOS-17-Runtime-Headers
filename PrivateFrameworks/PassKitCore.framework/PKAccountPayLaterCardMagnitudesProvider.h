
@interface PKAccountPayLaterCardMagnitudesProvider : NSObject <PKAccountServiceObserver, PKPayLaterCardMagnitudesProvider> {
    NSString * _accountIdentifier;
    PKAccountService * _accountService;
    PKPayLaterCardMagnitudes * _magnitudes;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_handleMagnitudesUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1 accountService:(id)arg2;
- (void)payLaterCardMagnitudesChanged:(id)arg1 forAccountIdentifier:(id)arg2;
- (void)refreshMagnitudes;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
