
@interface FAPickerSelectMemberHook : NSObject <RUIServerHook> {
    void activateAction;
    void delegate;
}

@property (nonatomic, copy) id /* block */ activateAction;
@property (nonatomic, retain) <RUIServerHookDelegate> *delegate;

- (void).cxx_destruct;
- (id /* block */)activateAction;
- (id)delegate;
- (id)init;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setActivateAction:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
