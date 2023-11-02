
@interface UIKeyboardAutomatic : UIKeyboard {
    <UITextCursorAssertion> * _blinkAssertion;
    unsigned long long  _lastChooseSupplementalItemToInsertCallbackIdentifier;
    _UIStringAndPositionPair * _lastMatchedSupplementalCandidate;
    _UIStringAndPositionPair * _pendingSupplementalCandidateToInsert;
    bool  receivedCandidatesInCurrentInputMode;
    bool  showsCandidateBar;
    bool  showsCandidateInline;
}

@property (nonatomic, retain) <UITextCursorAssertion> *blinkAssertion;
@property (nonatomic) unsigned long long lastChooseSupplementalItemToInsertCallbackIdentifier;
@property (nonatomic, retain) _UIStringAndPositionPair *lastMatchedSupplementalCandidate;
@property (nonatomic, retain) _UIStringAndPositionPair *pendingSupplementalCandidateToInsert;
@property (nonatomic) bool receivedCandidatesInCurrentInputMode;
@property (nonatomic) bool showsCandidateBar;
@property (nonatomic) bool showsCandidateInline;

+ (id)activeInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_isAutomaticKeyboard;
- (void)activate;
- (id)blinkAssertion;
- (void)dealloc;
- (void)didSuspend:(id)arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })geometryForHeightDelta:(double)arg1;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (bool)isAutomatic;
- (unsigned long long)lastChooseSupplementalItemToInsertCallbackIdentifier;
- (id)lastMatchedSupplementalCandidate;
- (void)maximize;
- (void)minimize;
- (id)pendingSupplementalCandidateToInsert;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(bool)arg2;
- (bool)receivedCandidatesInCurrentInputMode;
- (void)setBlinkAssertion:(id)arg1;
- (void)setLastChooseSupplementalItemToInsertCallbackIdentifier:(unsigned long long)arg1;
- (void)setLastMatchedSupplementalCandidate:(id)arg1;
- (void)setPendingSupplementalCandidateToInsert:(id)arg1;
- (void)setReceivedCandidatesInCurrentInputMode:(bool)arg1;
- (void)setShowsCandidateBar:(bool)arg1;
- (void)setShowsCandidateInline:(bool)arg1;
- (bool)showsCandidateBar;
- (bool)showsCandidateInline;
- (void)willResume:(id)arg1;

@end
