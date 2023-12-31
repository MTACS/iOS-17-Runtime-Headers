
@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction <_UIKeyboardTextSelectionGestureControllerDelegate> {
    _UIKeyboardTextSelectionController * _textSelectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;

- (void).cxx_destruct;
- (void)_setupControllersIfNecessaryWithView:(id)arg1;
- (void)dealloc;
- (void)didEndGesture;
- (void)finishSetup;
- (id)initWithView:(id)arg1;
- (bool)shouldAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (bool)shouldAllowWithTouchTypes:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (id)taskQueue;
- (id)textSelectionController;
- (void)willBeginGesture;

@end
