
@interface UITextCursorAssertionController : NSObject {
    NSHashTable * _assertions;
    <UITextCursorAssertionControllerSubject> * _subject;
}

@property (nonatomic) <UITextCursorAssertionControllerSubject> *subject;

- (void).cxx_destruct;
- (void)_beginTrackingAssertion:(id)arg1;
- (id)_createAssertionWithReason:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)_endTrackingAssertion:(id)arg1;
- (void)_updateSubjectWithAssertionState;
- (id)activeInputModeAssertionWithReason:(id)arg1;
- (id)capslockAssertionWithReason:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)deleteIndicatorAssertionWithReason:(id)arg1;
- (id)dictationIndicatorAssertionWithReason:(id)arg1 userInfo:(id)arg2;
- (id)inputModeSelectorAssertionWithReason:(id)arg1 userInfo:(id)arg2;
- (id)nonBlinkingAssertionWithReason:(id)arg1;
- (id)nonBlinkingGhostAssertionWithReason:(id)arg1;
- (id)nonVisibleAssertionWithReason:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;

@end
