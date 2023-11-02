
@interface SVXSessionOperation : NSObject {
    id /* block */  _activationCompletion;
    SVXActivationContext * _activationContext;
    id /* block */  _deactivationCompletion;
    SVXDeactivationContext * _deactivationContext;
    long long  _type;
}

- (void).cxx_destruct;
- (id)description;
- (bool)handleOperationUsingActivationBlock:(id /* block */)arg1 deactivationBlock:(id /* block */)arg2;
- (id)initWithActivationContext:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDeactivationContext:(id)arg1 completion:(id /* block */)arg2;

@end
