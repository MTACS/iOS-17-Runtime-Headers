
@protocol CNForkJoinResultReportingStrategy <NSObject>

@required

- (id)initWithCapacity:(unsigned long long)arg1;
- (void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id <CNObserver>)arg2;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id <CNObserver>)arg3;

@end
