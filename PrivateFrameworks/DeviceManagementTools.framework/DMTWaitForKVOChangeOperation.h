
@interface DMTWaitForKVOChangeOperation : CATOperation {
    NSObject * _expectedValue;
    NSObject * _initialValue;
    NSString * _keyPath;
    NSObject * _observedObject;
    bool  _observing;
    bool  _requireExpectedValue;
}

@property (nonatomic, readonly) NSObject *expectedValue;
@property (nonatomic, retain) NSObject *initialValue;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) NSObject *observedObject;
@property (getter=isObserving, nonatomic) bool observing;
@property (nonatomic, readonly) bool requireExpectedValue;

- (void).cxx_destruct;
- (void)beginObserving;
- (void)cancel;
- (void)compareExpectedValueWithChangedValue:(id)arg1;
- (void)endObservingIfNeeded;
- (void)endOperationAndTearDownWithError:(id)arg1 resultObject:(id)arg2;
- (id)expectedValue;
- (void)handleKVOChangeWithValueOfKeyPath:(id)arg1;
- (id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 expectedValue:(id)arg3 requireExpectedValue:(bool)arg4;
- (id)initialValue;
- (bool)isAsynchronous;
- (bool)isObserving;
- (id)keyPath;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedObject;
- (bool)requireExpectedValue;
- (void)setInitialValue:(id)arg1;
- (void)setObserving:(bool)arg1;

@end
