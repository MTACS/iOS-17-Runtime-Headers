
@interface HDSPAssertionManager : NSObject <BSDescriptionProviding, HDSPDiagnosticsProvider> {
    NSMutableDictionary * _assertions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assertionsLock;
}

@property (nonatomic, retain) NSMutableDictionary *assertions;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } assertionsLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)assertionClassForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_assertionsOfType:(unsigned long long)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)activeAssertionIdentifiersOfType:(unsigned long long)arg1;
- (id)assertions;
- (struct os_unfair_lock_s { unsigned int x1; })assertionsLock;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)init;
- (void)releaseAssertionWithIdentifier:(id)arg1;
- (void)setAssertions:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)takeAssertion:(id)arg1;
- (void)takeAssertionWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)takeAssertionWithIdentifier:(id)arg1 type:(unsigned long long)arg2 timeout:(double)arg3;
- (void)takeIndefiniteAssertionWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end
