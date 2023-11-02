
@interface _PXUITextView : UITextView <PKScribbleInteractionDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray * _keyCommands;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (double)_distanceFromContentToGivenPoint:(struct CGPoint { double x1; double x2; })arg1 charIndexAtPoint:(unsigned long long*)arg2;
- (void)_handleTapGesture:(id)arg1;
- (id)_linkTappedByGesture:(id)arg1 charIndexAtPoint:(unsigned long long*)arg2;
- (bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)addKeyCommand:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)keyCommands;
- (void)setEditable:(bool)arg1;
- (id)tapGestureRecognizer;

@end
