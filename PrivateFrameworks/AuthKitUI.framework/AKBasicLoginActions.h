
@interface AKBasicLoginActions : NSObject <NSCopying> {
    id /* block */  _ak_cancelAction;
    id /* block */  _authenticateAction;
    id /* block */  _createIDAction;
    id /* block */  _forgotIDAction;
    id /* block */  _forgotPasswordAction;
    id /* block */  _useIDAction;
}

@property (nonatomic, copy) id /* block */ ak_cancelAction;
@property (nonatomic, copy) id /* block */ authenticateAction;
@property (nonatomic, copy) id /* block */ createIDAction;
@property (nonatomic, copy) id /* block */ forgotIDAction;
@property (nonatomic, copy) id /* block */ forgotPasswordAction;
@property (nonatomic, copy) id /* block */ useIDAction;

- (void).cxx_destruct;
- (id /* block */)ak_cancelAction;
- (id /* block */)authenticateAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)createIDAction;
- (id /* block */)forgotIDAction;
- (id /* block */)forgotPasswordAction;
- (void)setAk_cancelAction:(id /* block */)arg1;
- (void)setAuthenticateAction:(id /* block */)arg1;
- (void)setCreateIDAction:(id /* block */)arg1;
- (void)setForgotIDAction:(id /* block */)arg1;
- (void)setForgotPasswordAction:(id /* block */)arg1;
- (void)setUseIDAction:(id /* block */)arg1;
- (id /* block */)useIDAction;

@end
