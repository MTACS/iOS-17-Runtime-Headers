
@interface ICQFamilySharingHook : NSObject <ICQUIServerHook> {
    <RUIServerHookDelegate> * _delegate;
    FACircleStateController * _familyCircleStateController;
    <ICQServerHookDelegate> * _flowDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) FACircleStateController *familyCircleStateController;
@property <ICQServerHookDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginFamilySharingFlowWithCompletion:(id /* block */)arg1;
- (id)continuationResponseBody;
- (id)delegate;
- (id)familyCircleStateController;
- (id)flowDelegate;
- (id)initWithFlowDelegate:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFamilyCircleStateController:(id)arg1;
- (void)setFlowDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
