
@interface _CNFlatMapObservable : CNObservable {
    id /* block */  _decoratorGenerator;
    CNObservable * _observable;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly, copy) id /* block */ decoratorGenerator;
@property (nonatomic, readonly) CNObservable *observable;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;

+ (id)concatMapWithObservable:(id)arg1 transform:(id /* block */)arg2 schedulerProvider:(id)arg3;
+ (id)flatMapWithObservable:(id)arg1 transform:(id /* block */)arg2 schedulerProvider:(id)arg3;
+ (id)observableWithObservable:(id)arg1 transform:(id /* block */)arg2 decoratorGenerator:(id /* block */)arg3 schedulerProvider:(id)arg4;

- (void).cxx_destruct;
- (id /* block */)decoratorGenerator;
- (id)initWithObservable:(id)arg1 transform:(id /* block */)arg2 decoratorGenerator:(id /* block */)arg3 schedulerProvider:(id)arg4;
- (id)observable;
- (id)schedulerProvider;
- (id)subscribe:(id)arg1;
- (id)subscribeInnerObservable:(id)arg1 observer:(id)arg2 context:(id)arg3;

@end
