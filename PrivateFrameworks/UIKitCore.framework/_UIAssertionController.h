
@interface _UIAssertionController : NSObject {
    NSMutableDictionary * _activeAssertionRecords;
    <_UIAssertionControllerSubject> * _subject;
}

@property (nonatomic, readonly) <_UIAssertionControllerSubject> *subject;

- (void).cxx_destruct;
- (void)_beginTrackingAssertion:(id)arg1;
- (void)_endTrackingAssertion:(id)arg1;
- (void)_enforceSubjectAwarenessOfAssertionState:(bool)arg1 forAssertionType:(unsigned long long)arg2;
- (id)debugDescription;
- (bool)hasAssertionsOfType:(unsigned long long)arg1;
- (id)initWithAssertionSubject:(id)arg1;
- (id)subject;
- (id)vendAssertionOfType:(unsigned long long)arg1 initialState:(bool)arg2;
- (id)vendAssertionOfType:(unsigned long long)arg1 initialState:(bool)arg2 reason:(id)arg3;
- (id)vendAssertionOfType:(unsigned long long)arg1 initialState:(bool)arg2 reason:(id)arg3 requiresExplicitInvalidation:(bool)arg4;

@end
