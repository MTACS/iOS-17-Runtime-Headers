
@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {
    NSOperation * _afterShrinkCompletionInvocation;
    double  _angle;
    double  _diameter;
    bool  _didHaveText;
    bool  _didSkipLanding;
    CADisplayLink * _displayLink;
    <UITextCursorAssertion> * _hideCursorAssertion;
    id  _placeholder;
    UITextRange * _range;
    double  _shrinkStartTime;
    bool  _shrinking;
    double  _startTime;
    bool  _willInsertResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSkipLanding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UITextCursorAssertion> *hideCursorAssertion;
@property (readonly) Class superclass;
@property (nonatomic) bool willInsertResult;

+ (id)activeInstance;
+ (double)diameterForLineHeight:(double)arg1;
+ (long long)fallbackPlaceholderLength;
+ (id)sharedInstance;
+ (double)widthForLineHeight:(double)arg1;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_currentTextInputView;
- (void)_invalidatDisplayLink;
- (id)_timingFunctionForAnimation;
- (void)advanceLanding:(id)arg1;
- (bool)canStopLanding;
- (void)clearRotation;
- (void)dealloc;
- (bool)delegateWasEmpty;
- (bool)didSkipLanding;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)errorShakeDidFinish;
- (double)fadeOutDuration;
- (bool)hasActivePlaceholder;
- (void)hideCursor;
- (id)hideCursorAssertion;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)performRemoteSelector:(SEL)arg1;
- (void)rotateBy:(double)arg1;
- (void)setDidSkipLanding:(bool)arg1;
- (void)setHideCursorAssertion:(id)arg1;
- (void)setWillInsertResult:(bool)arg1;
- (void)showCursor;
- (void)shrinkWithCompletion:(id)arg1;
- (void)startDisplayLinkIfNecessary;
- (void)startLandingIfNecessary;
- (void)stopLanding;
- (void)stopLandingForError;
- (void)updatePosition;
- (bool)willInsertResult;

@end
