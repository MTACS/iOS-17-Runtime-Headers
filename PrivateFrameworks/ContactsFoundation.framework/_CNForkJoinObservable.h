
@interface _CNForkJoinObservable : CNObservable {
    NSArray * _observables;
    <CNForkJoinResultReportingStrategy> * _resultReportingStrategy;
}

+ (id)forkJoin:(id)arg1;
+ (id)progressiveForkJoin:(id)arg1;

- (void).cxx_destruct;
- (id)initWithObservables:(id)arg1 reportingStrategy:(id)arg2;
- (id)subscribe:(id)arg1;

@end
