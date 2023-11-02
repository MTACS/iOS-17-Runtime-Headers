
@interface CNAsynchronousCacheEntry : NSObject {
    id  _currentValue;
    NSPointerArray * _delegates;
    <CNSchedulerProvider> * _schedulerProvider;
    double  _timestampOfCurrentValue;
}

@property (retain) id currentValue;
@property (readonly) NSPointerArray *delegates;
@property (readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) double timestampOfCurrentValue;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)currentValue;
- (id)delegates;
- (id)description;
- (id)init;
- (id)initWithSchedulerProvider:(id)arg1;
- (void)removeDelegates:(id)arg1;
- (id)schedulerProvider;
- (void)setCurrentValue:(id)arg1;
- (double)timestampOfCurrentValue;
- (void)updateValue:(id)arg1;
- (void)withLock_addDelegate:(id)arg1;
- (void)withLock_compactAndRemoveDelegates:(id)arg1;
- (void)withLock_compactDelegates;

@end
