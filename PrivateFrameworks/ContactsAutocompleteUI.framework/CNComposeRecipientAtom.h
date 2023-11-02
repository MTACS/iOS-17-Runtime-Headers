
@interface CNComposeRecipientAtom : CNAtomView {
    <CNComposeRecipientAtomDelegate> * _delegate;
    CNComposeRecipient * _recipient;
    unsigned int  _touchBeganWithShiftDown;
    unsigned int  _touchesWereCancelled;
    UITextInputTraits * _traits;
    unsigned int  _wasSelectedWhenTouchesBegan;
}

@property (nonatomic) <CNComposeRecipientAtomDelegate> *delegate;
@property (nonatomic, retain) CNComposeRecipient *recipient;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleFirstTap;
- (void)handleTouchAndHold;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;
- (id)keyCommands;
- (id)menuConfigurationForChevronButton;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (id)recipient;
- (void)setDelegate:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
