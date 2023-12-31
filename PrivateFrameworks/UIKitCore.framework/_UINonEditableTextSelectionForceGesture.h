
@interface _UINonEditableTextSelectionForceGesture : _UITextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate> {
    _UIKeyboardTextSelectionGestureController * _gestureController;
    _UIKeyboardTextSelectionController * _textSelectionController;
    <_UINonEditableTextSelectionForceGestureDelegate> * forceGestureDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_UINonEditableTextSelectionForceGestureDelegate> *forceGestureDelegate;
@property (nonatomic, retain) _UIKeyboardTextSelectionGestureController *gestureController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, retain) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;

- (void).cxx_destruct;
- (bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (void)dealloc;
- (id)forceGestureDelegate;
- (id)gestureController;
- (id)initWithTextInput:(id)arg1;
- (void)setForceGestureDelegate:(id)arg1;
- (void)setGestureController:(id)arg1;
- (void)setTextSelectionController:(id)arg1;
- (id)taskQueue;
- (id)textSelectionController;
- (void)willBeginGesture;

@end
