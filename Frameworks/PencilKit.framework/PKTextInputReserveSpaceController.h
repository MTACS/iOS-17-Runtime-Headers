
@interface PKTextInputReserveSpaceController : NSObject <PKTextInputDebugStateReporting> {
    bool  __canvasControllerIsDrawing;
    NSTimer * __dismissTimer;
    long long  __insertionCharacterLocation;
    long long  __reserveSpaceState;
    PKTextInputElementContent * __targetElementContent;
    struct CGPoint { 
        double x; 
        double y; 
    }  __targetPointInElement;
    PKTextInputTextPlaceholder * __textPlaceholder;
    bool  __wasAskedToReserveSpace;
    <PKTextInputReserveSpaceControllerDelegate> * _delegate;
    PKTextInputFeedbackController * _feedbackController;
}

@property (nonatomic) bool _canvasControllerIsDrawing;
@property (nonatomic, retain) NSTimer *_dismissTimer;
@property (nonatomic) long long _insertionCharacterLocation;
@property (setter=_setReserveSpaceState:, nonatomic) long long _reserveSpaceState;
@property (setter=_setTargetElementContent:, nonatomic, retain) PKTextInputElementContent *_targetElementContent;
@property (nonatomic) struct CGPoint { double x1; double x2; } _targetPointInElement;
@property (nonatomic, retain) PKTextInputTextPlaceholder *_textPlaceholder;
@property (nonatomic) bool _wasAskedToReserveSpace;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKTextInputReserveSpaceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKTextInputFeedbackController *feedbackController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReserveSpaceActive;
@property (nonatomic, readonly) bool isReserveSpacePlaceholderVisible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canvasControllerIsDrawing;
- (id)_dismissTimer;
- (void)_finishAndResetStateInsertingWhitespace:(bool)arg1;
- (void)_handleAutodismissTimer;
- (void)_insertWhitespaceWithElement:(id)arg1 atReferencePoint:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (long long)_insertionCharacterLocation;
- (void)_moveToContentLoadedIfReady;
- (void)_moveToInsertingPlaceholderIfReady;
- (void)_moveToShowingIntroIfReady;
- (void)_moveToShowingPlaceholderIfReady;
- (long long)_preferredInsertionLocation;
- (long long)_reserveSpaceState;
- (void)_setReserveSpaceState:(long long)arg1;
- (void)_setTargetElementContent:(id)arg1;
- (void)_startDismissTimerWithDelay:(double)arg1;
- (id)_targetElementContent;
- (struct CGPoint { double x1; double x2; })_targetPointInElement;
- (id)_textPlaceholder;
- (void)_updateReserveSpaceState;
- (bool)_wasAskedToReserveSpace;
- (void)beginIfPossibleWithElement:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 coordinateSpace:(id)arg3;
- (void)cancelReserveSpaceIntro;
- (id)delegate;
- (id)feedbackController;
- (void)finishReserveSpaceAndInsertWhitespace:(bool)arg1;
- (id)initWithFeedbackController:(id)arg1;
- (bool)isReserveSpaceActive;
- (bool)isReserveSpacePlaceholderVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderFrameInCoordinateSpace:(id)arg1;
- (void)reportDebugStateDescription:(id /* block */)arg1;
- (void)reserveSpaceWhenReady;
- (void)setCanvasControllerIsDrawing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)set_canvasControllerIsDrawing:(bool)arg1;
- (void)set_dismissTimer:(id)arg1;
- (void)set_insertionCharacterLocation:(long long)arg1;
- (void)set_targetPointInElement:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_textPlaceholder:(id)arg1;
- (void)set_wasAskedToReserveSpace:(bool)arg1;
- (bool)tapPointIsInPlaceholder:(struct CGPoint { double x1; double x2; })arg1;

@end
