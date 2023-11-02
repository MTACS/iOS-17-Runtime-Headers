
@interface FBSceneClientProviderInvalidationAction : NSObject {
    BSAction * _action;
    BSAtomicSignal * _invalidated;
}

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)arg1;
- (void)invalidate;

@end
