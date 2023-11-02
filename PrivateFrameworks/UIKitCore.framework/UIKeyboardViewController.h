
@interface UIKeyboardViewController : UIViewController <UIGestureRecognizerDelegate> {
    UIInputViewController * _inputViewController;
    UIKeyboard * _keyboard;
    UIView * _pathEffectView;
    unsigned long long  _serviceRole;
    bool  _shouldUpdateLayoutAutomatically;
    UISystemInputAssistantViewController * _systemInputAssistantViewController;
    UIView<UIKeyInput> * _textInputView;
}

@property (nonatomic, readonly) UIKeyboardAutocorrectionController *autocorrectionController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *inputAssistantView;
@property (nonatomic, retain) UIInputViewController *inputViewController;
@property (nonatomic, retain) UIKeyboard *keyboard;
@property (nonatomic, readonly) UIView *pathEffectView;
@property (nonatomic) bool resizable;
@property (nonatomic) unsigned long long serviceRole;
@property (nonatomic) bool shouldUpdateLayoutAutomatically;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISystemInputAssistantViewController *systemInputAssistantViewController;
@property (nonatomic, retain) UIView<UIKeyInput> *textInputView;

+ (void)_verifyClient;

- (void).cxx_destruct;
- (id)autocorrectionController;
- (void)didSelectPredictiveCandidate:(id)arg1;
- (id)init;
- (id)initWithServiceRole:(unsigned long long)arg1;
- (id)inputAssistantView;
- (id)inputViewController;
- (id)keyboard;
- (void)loadView;
- (id)pathEffectView;
- (void)registerProxyKeysWithViews:(id)arg1;
- (bool)resizable;
- (unsigned long long)serviceRole;
- (void)setInputViewController:(id)arg1;
- (void)setKeyboard:(id)arg1;
- (void)setResizable:(bool)arg1;
- (void)setServiceRole:(unsigned long long)arg1;
- (void)setShouldUpdateLayoutAutomatically:(bool)arg1;
- (void)setSystemInputAssistantViewController:(id)arg1;
- (void)setTextInputView:(id)arg1;
- (void)shouldAcceptAutocorrection;
- (bool)shouldUpdateLayoutAutomatically;
- (id)systemInputAssistantViewController;
- (id)textInputView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
