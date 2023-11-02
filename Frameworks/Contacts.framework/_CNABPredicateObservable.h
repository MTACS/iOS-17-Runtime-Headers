
@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate> {
    void * _addressBook;
    CNCancelationToken * _cancelationToken;
    CNContactsEnvironment * _environment;
    <CNObserver> * _observer;
    unsigned long long  _options;
    ABPredicate * _predicate;
    unsigned int  _sortOrdering;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)predicateShouldContinue:(id)arg1;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(bool)arg3;
- (id)subscribe:(id)arg1;

@end
