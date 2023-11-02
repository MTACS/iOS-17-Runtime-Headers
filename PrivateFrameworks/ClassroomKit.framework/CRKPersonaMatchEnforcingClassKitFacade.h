
@interface CRKPersonaMatchEnforcingClassKitFacade : CRKClassKitFacadeDecoratorBase {
    CRKClassKitCurrentUserProvider * _currentUserProvider;
    long long  _modifiedAccountState;
}

@property (nonatomic, readonly) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic) long long modifiedAccountState;

+ (id)keyPathsForValuesAffectingAccountState;

- (void).cxx_destruct;
- (long long)accountState;
- (id)currentUserProvider;
- (void)dealloc;
- (id)initWithClassKitFacade:(id)arg1;
- (bool)isPersonaEligible;
- (long long)modifiedAccountState;
- (long long)nextAccountState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setModifiedAccountState:(long long)arg1;
- (void)startObserving;
- (void)stopObserving;
- (void)updateAccountState;

@end
