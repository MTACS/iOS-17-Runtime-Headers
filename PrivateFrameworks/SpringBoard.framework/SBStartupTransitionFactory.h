
@interface SBStartupTransitionFactory : NSObject {
    SBInitialRestartState * _initialRestartState;
}

- (void).cxx_destruct;
- (id)_transactionForDestination:(unsigned long long)arg1 context:(id)arg2;
- (id)initWithInitialRestartState:(id)arg1;
- (id)transitionForContext:(id)arg1 outDestination:(unsigned long long*)arg2;

@end
