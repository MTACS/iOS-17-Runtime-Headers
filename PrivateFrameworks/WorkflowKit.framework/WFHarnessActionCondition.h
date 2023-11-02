
@interface WFHarnessActionCondition : NSObject {
    Class  _eventClass;
    id /* block */  _eventHandler;
    WFHarnessActionSelector * _selector;
}

@property (nonatomic, readonly) Class eventClass;
@property (nonatomic, readonly, copy) id /* block */ eventHandler;
@property (nonatomic, readonly) WFHarnessActionSelector *selector;

- (void).cxx_destruct;
- (void)evaluateWithEvent:(id)arg1 context:(id)arg2 withResponse:(id /* block */)arg3;
- (Class)eventClass;
- (id /* block */)eventHandler;
- (id)initWithSelector:(id)arg1 eventClass:(Class)arg2 eventHandler:(id /* block */)arg3;
- (id)selector;

@end
