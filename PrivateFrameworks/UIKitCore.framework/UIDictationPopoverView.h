
@interface UIDictationPopoverView : UIDictationView <UIPointerInteractionDelegate> {
    UIButton * _cancelButton;
    UIButton * _centerButton;
    UIImage * _hideKeyboardButtonImage;
    UIButton * _keyboardButton;
    UIButton * _languageButton;
    NSMutableArray * _languageButtons;
    UIView * _languageView;
    unsigned long long  _popoverPage;
    UIImage * _showKeyboardButtonImage;
    UIButton * _startButton;
    UIButton * _stopButton;
    UIImage * _stopDictationImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })viewSize;

- (void).cxx_destruct;
- (id)buttonImageNamed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)centerButtonPressed:(id)arg1;
- (void)clearLanguageButtons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)keyboardButtonPressed:(id)arg1;
- (void)languageButtonPressed:(id)arg1 withEvent:(id)arg2;
- (id)languageButtons:(bool)arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)returnToKeyboard;
- (void)setState:(int)arg1;
- (void)startButtonPressed:(id)arg1;
- (void)stopButtonPressed:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
