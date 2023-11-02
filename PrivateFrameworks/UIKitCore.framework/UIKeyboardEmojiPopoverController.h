
@interface UIKeyboardEmojiPopoverController : UIKeyboardPopoverController <UIKeyboardLayoutStarDelegate> {
    UIKBViewForResponderForwarding * _containerForActiveKeys;
    NSMutableArray * _hiddenKeys;
    UIKBTree * _keyboard;
    UIKeyboardLayoutStar * _layout;
    UIKBScreenTraits * _screenTraits;
    UIKeyboardTaskQueue * _taskQueue;
    UITextInputTraits * _textInputTraits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIKeyboardLayoutStar *layout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)handleHardwareKeyboardEvent:(id)arg1;
- (id)initWithTextInputTraits:(id)arg1;
- (id)initWithTextInputTraits:(id)arg1 hasVerticalScrolling:(bool)arg2;
- (id)initWithTextInputTraits:(id)arg1 taskQueue:(id)arg2;
- (id)initWithTextInputTraits:(id)arg1 taskQueue:(id)arg2 scrollingDirection:(long long)arg3;
- (id)initWithTextInputTraits:(id)arg1 taskQueue:(id)arg2 scrollingDirection:(long long)arg3 window:(id)arg4;
- (id)initWithTextInputTraits:(id)arg1 taskQueue:(id)arg2 window:(id)arg3;
- (id)keyboardLayout:(id)arg1 containingViewForActiveKey:(id)arg2 inKeyplaneView:(id)arg3;
- (void)keyboardLayout:(id)arg1 didSwitchToKeyplane:(id)arg2;
- (id)keyboardLayout:(id)arg1 willChangeRenderConfig:(id)arg2;
- (id)layout;
- (long long)overrideUserInterfaceStyle;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (double)preferredTextFieldHeight;
- (void)setLayout:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsDimmingView;

@end
