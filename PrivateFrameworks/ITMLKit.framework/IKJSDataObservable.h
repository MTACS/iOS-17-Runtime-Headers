
@interface IKJSDataObservable : IKJSEventListenerObject <IKJSDataObservable> {
    _IKJSDataDictionaryExporter * _exporter;
    bool  _isBoxed;
    JSManagedValue * _managedTargetValue;
    NSMutableArray * _observerRecords;
    bool  _observersEnabled;
    IKJSDataObservable * _parent;
    NSArray * _parentAccessorSequence;
}

@property (nonatomic, readonly) bool isBoxed;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic) bool observersEnabled;
@property (nonatomic, readonly) IKJSDataObservable *parent;
@property (nonatomic, readonly, copy) NSArray *parentAccessorSequence;
@property (nonatomic, readonly) JSValue *targetValue;

+ (id)_proxyHandlerForValue:(id)arg1 boxed:(bool)arg2 context:(id)arg3;
+ (id)jsExportedProperties;
+ (id)toDataObservable:(id)arg1;
+ (id)toDataObservable:(id)arg1 proxy:(id*)arg2;

- (void).cxx_destruct;
- (id)_initWithTargetValue:(id)arg1 boxed:(bool)arg2;
- (void)_updateValueAtPropertyPath:(id)arg1 touch:(bool)arg2 withBlock:(id /* block */)arg3;
- (void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2;
- (id)dataDictionaryObject;
- (id)exportValue;
- (id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2;
- (id)getPropertyPath:(id)arg1;
- (id)init;
- (id)initWithTargetValue:(id)arg1;
- (bool)isBoxed;
- (bool)isPlaceholder;
- (bool)observersEnabled;
- (id)parent;
- (id)parentAccessorSequence;
- (void)removeObserver:(id)arg1;
- (void)resetValueForPropertyPath:(id)arg1;
- (void)setObserversEnabled:(bool)arg1;
- (void)setParent:(id)arg1 accessorSequence:(id)arg2;
- (void)setPropertyPath:(id)arg1 :(id)arg2;
- (void)setTargetValue:(id)arg1;
- (void)setValue:(id)arg1 forPropertyPath:(id)arg2;
- (id)targetValue;
- (void)touchPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2;
- (void)touchPropertyPath:(id)arg1;
- (id)valueForAccessorSequence:(id)arg1 closestParent:(id*)arg2 accessorSequenceFromClosestParent:(id*)arg3;
- (id)valueForPropertyPath:(id)arg1 boxed:(bool)arg2;

@end
