
@interface WFHarnessInteraction : NSObject {
    Class  _dialogRequestClass;
    id /* block */  _interaction;
    WFHarnessActionSelector * _selector;
}

@property (nonatomic, readonly) Class dialogRequestClass;
@property (nonatomic, readonly) id /* block */ interaction;
@property (nonatomic, readonly) WFHarnessActionSelector *selector;

- (void).cxx_destruct;
- (Class)dialogRequestClass;
- (id)initWithSelector:(id)arg1 dialogRequestClass:(Class)arg2 interaction:(id /* block */)arg3;
- (id /* block */)interaction;
- (id)selector;

@end
