
@interface TUICursorAccessoryAssertionController : NSObject {
    NSHashTable * _assertions;
    <TUICursorAccessoryAssertionControllerSubject> * _subject;
}

@property (nonatomic, retain) NSHashTable *assertions;
@property (nonatomic) <TUICursorAccessoryAssertionControllerSubject> *subject;

- (void).cxx_destruct;
- (id)assertions;
- (void)beginTrackingAssertion:(id)arg1;
- (id)createAssertionWithType:(unsigned long long)arg1 accessory:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)endTrackingAssertion:(id)arg1;
- (void)setAssertions:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;
- (void)updateSubjectWithAssertionState;

@end
