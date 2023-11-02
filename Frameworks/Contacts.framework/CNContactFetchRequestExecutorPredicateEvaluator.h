
@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject <CNPredicateVisitor> {
    <CNDataMapper> * _dataMapper;
    CNContactFetchRequest * _fetchRequest;
    CNObservable * _observable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyFetchRequestWithPredicate:(id)arg1;
- (id)evaluateSubpredicate:(id)arg1;
- (void)visitAndPredicate:(id)arg1;
- (void)visitCNPredicate:(id)arg1;
- (void)visitFalsePredicate:(id)arg1;
- (void)visitNSCompoundPredicate:(id)arg1;
- (void)visitNSPredicate:(id)arg1;
- (void)visitNotPredicate:(id)arg1;
- (void)visitOrPredicate:(id)arg1;
- (void)visitTruePredicate:(id)arg1;

@end
