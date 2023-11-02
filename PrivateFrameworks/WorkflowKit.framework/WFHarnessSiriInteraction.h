
@interface WFHarnessSiriInteraction : NSObject {
    id /* block */  _interaction;
    WFHarnessActionSelector * _selector;
    Class  _siriActionRequestClass;
}

@property (nonatomic, readonly) id /* block */ interaction;
@property (nonatomic, readonly) WFHarnessActionSelector *selector;
@property (nonatomic, readonly) Class siriActionRequestClass;

- (void).cxx_destruct;
- (id)initWithSelector:(id)arg1 siriActionRequestClass:(Class)arg2 interaction:(id /* block */)arg3;
- (id /* block */)interaction;
- (id)selector;
- (Class)siriActionRequestClass;

@end
