
@interface CNContactChangesObserverProxy : NSObject {
    CNContact * _contactSnapshot;
    NSArray * _keysToFetch;
    <CNContactChangesObserver> * _observer;
    bool  _unify;
}

- (void).cxx_destruct;

@end
