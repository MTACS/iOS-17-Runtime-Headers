
@interface CRKWaitForKeyValueChangeOperation : CATOperation {
    id /* block */  _conditionEvaluator;
    NSSet * _keyPaths;
    NSObject * _object;
    bool  _observing;
}

@property (nonatomic, copy) id /* block */ conditionEvaluator;
@property (nonatomic, readonly, copy) NSSet *keyPaths;
@property (nonatomic, readonly) NSObject *object;
@property (getter=isObserving, nonatomic) bool observing;

- (void).cxx_destruct;
- (void)beginObservingObject;
- (void)cancel;
- (id /* block */)conditionEvaluator;
- (void)endObservingObject;
- (void)evaluateConditions;
- (id)initWithObject:(id)arg1 keyPaths:(id)arg2 conditionEvaluator:(id /* block */)arg3;
- (bool)isAsynchronous;
- (bool)isObserving;
- (id)keyPaths;
- (void)main;
- (id)object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setConditionEvaluator:(id /* block */)arg1;
- (void)setObserving:(bool)arg1;

@end
