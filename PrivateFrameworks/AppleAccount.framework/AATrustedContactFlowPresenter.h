
@interface AATrustedContactFlowPresenter : AAFlowPresenter <TrustedContactFlowPresenterProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)presentInvitationUIWithCustodianshipInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)presentModel:(id)arg1 completion:(id /* block */)arg2;

@end
