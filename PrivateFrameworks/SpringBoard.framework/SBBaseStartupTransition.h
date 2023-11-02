
@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition> {
    SBStartupTransitionContext * _context;
    unsigned long long  _destination;
    SBMainWorkspace * _mainWorkspace;
}

@property (nonatomic, readonly) SBStartupTransitionContext *context;
@property (nonatomic, readonly) unsigned long long destination;
@property (nonatomic, readonly) SBMainWorkspace *mainWorkspace;

- (void).cxx_destruct;
- (void)_begin;
- (id)context;
- (unsigned long long)destination;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;
- (id)mainWorkspace;
- (void)performTransitionWithCompletionBlock:(id /* block */)arg1;

@end
