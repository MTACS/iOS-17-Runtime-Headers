
@protocol SiriSharedUIViewControlling <NSObject>

@required

- (AceObject *)aceObject;
- (bool)isUtteranceUserInteractionEnabled;
- (void)setAceObject:(AceObject *)arg1;
- (void)setUtteranceUserInteractionEnabled:(bool)arg1;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;

@optional

- (double)baselineOffsetFromBottom;
- (void)configureForConversationStorable:(id <AFConversationStorable>)arg1;
- (double)desiredHeight;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredPinnedTopPadding;
- (void)endEditingAndCorrect:(bool)arg1;
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)handleAceCommand:(AceObject *)arg1;
- (bool)hasSash;
- (NSUUID *)instrumentationTurnIdentifier;
- (bool)isInAmbient;
- (bool)isInAmbientInteractivity;
- (NSString *)navigationTitle;
- (void)setInstrumentationTurnIdentifier:(NSUUID *)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setIsInAmbientInteractivity:(bool)arg1;
- (bool)shouldHidePriorViews;
- (void)siriDidReceiveViewsWithDialogPhase:(AFDialogPhase *)arg1;
- (void)siriDidScrollVisible:(bool)arg1;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(NSString *)arg1 speechQueueIsEmpty:(bool)arg2;
- (void)siriDidTapOutsideContent;
- (void)siriDidUpdateASRWithRecognition:(NSString *)arg1;
- (void)siriIsIdleAndQuiet;
- (void)siriWillBeginScrolling;
- (void)siriWillStartRequest;

@end
