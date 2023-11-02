
@interface AAUICDPStatusUpdateHook : NSObject <RUIServerHook> {
    NSDictionary * _actionControllers;
    <RUIServerHookDelegate> * _delegate;
    unsigned long long  _presentationType;
    RUIServerHookResponse * _serverHookResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCompletionWithCallback:(id /* block */)arg1 onModel:(id)arg2 forHookAction:(id)arg3 userAction:(unsigned long long)arg4 error:(id)arg5;
- (void)_handleUserInteractionWithCallback:(id /* block */)arg1 onModel:(id)arg2 forHookAction:(id)arg3 userAction:(unsigned long long)arg4;
- (void)_invokeJSCallback:(id)arg1 onModel:(id)arg2;
- (void)_invokeJSCallback:(id)arg1 onModel:(id)arg2 withArguments:(id)arg3;
- (unsigned long long)_presentationTypeForString:(id)arg1;
- (void)_processAttributes:(id)arg1;
- (void)_updateStatusWithAction:(id)arg1 forObjectModel:(id)arg2 completion:(id /* block */)arg3;
- (id)additionalPayloadForAction:(id)arg1 error:(id)arg2;
- (id)changeControllerForAction:(id)arg1;
- (id)delegate;
- (void)postCompletionProcessingForAction:(id)arg1 error:(id)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHookResponse;
- (void)setDelegate:(id)arg1;
- (void)setServerHookResponse:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
