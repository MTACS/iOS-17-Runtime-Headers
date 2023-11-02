
@interface CRKIDSAccountsEvaluator : NSObject {
    NSObject<CRKIDSLocalPrimitives> * _IDSLocalPrimitives;
    NSArray * _observedAccounts;
    CRKIDSAccountsState * _state;
}

@property (nonatomic, readonly) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives;
@property (nonatomic, copy) NSArray *observedAccounts;
@property (nonatomic, retain) CRKIDSAccountsState *state;

- (void).cxx_destruct;
- (id)IDSLocalPrimitives;
- (void)beginObservingAccounts:(id)arg1;
- (void)beginObservingKnownAccountChanges;
- (void)dealloc;
- (void)endObservingAccounts:(id)arg1;
- (void)endObservingKnownAccountChanges;
- (id)initWithIDSLocalPrimitives:(id)arg1;
- (void)knownAccountsDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)observedAccountDidChange:(id)arg1;
- (id)observedAccounts;
- (void)setObservedAccounts:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)updateState;

@end
