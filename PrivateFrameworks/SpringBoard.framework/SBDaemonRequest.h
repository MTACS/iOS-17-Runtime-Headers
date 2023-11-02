
@interface SBDaemonRequest : NSObject {
    id /* block */  _disabler;
    id /* block */  _enabler;
}

@property (nonatomic, copy) id /* block */ disabler;
@property (nonatomic, copy) id /* block */ enabler;

+ (id)requestWithEnabler:(id /* block */)arg1 disabler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)disabler;
- (void)dispatchDisablerOnQueue:(id)arg1;
- (void)dispatchEnablerOnQueue:(id)arg1;
- (id /* block */)enabler;
- (void)setDisabler:(id /* block */)arg1;
- (void)setEnabler:(id /* block */)arg1;

@end
