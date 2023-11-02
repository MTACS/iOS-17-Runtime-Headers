
@interface FAPeerPaymentHook : NSObject <AAUIServerHook> {
    FAAppleCashPresentationHandler * _appleCashPresentationHandler;
    <RUIServerHookDelegate> * _delegate;
}

@property (nonatomic, retain) FAAppleCashPresentationHandler *appleCashPresentationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePeerPaymentActionWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)appleCashPresentationHandler;
- (id)delegate;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setAppleCashPresentationHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
