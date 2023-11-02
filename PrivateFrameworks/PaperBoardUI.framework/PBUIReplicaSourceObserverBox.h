
@interface PBUIReplicaSourceObserverBox : NSObject <BSInvalidatable, NSFastEnumeration, PBUIPosterReplicaSourceObserver> {
    BSCompoundAssertion * _sharedUpdateAssertion;
    bool  _wasLastActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (long long)effectiveStyle;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 activeStateDidChangeHandler:(id /* block */)arg2;
- (void)invalidate;
- (id)registerSourceObserver:(id)arg1;
- (void)setNeedsSourceUpdate;

@end
