
@interface TVRAlertController : UIViewController <TVRAlertViewDelegate, TVRKeyboardViewDelegate, UIViewControllerTransitioningDelegate> {
    TVRAlertView * _alertView;
    <TVRAlertControllerDelegate> * _delegate;
    UIView * _dimmingView;
    TVRCKeyboardAttributes * _keyboardAttributes;
    TVRKeyboardView * _keyboardView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousKeyboardFrame;
    NSString * _text;
    unsigned long long  _type;
}

@property (nonatomic, retain) TVRAlertView *alertView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVRAlertControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) TVRCKeyboardAttributes *keyboardAttributes;
@property (nonatomic, retain) TVRKeyboardView *keyboardView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousKeyboardFrame;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_cancel;
- (id)_contentViewBasedOnType;
- (void)_keyboardChanged:(id)arg1;
- (void)_layoutForKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_observeKeyboardNotifications;
- (id)alertView;
- (void)alertView:(id)arg1 didUpdateText:(id)arg2;
- (void)alertViewDidCancel:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)delegate;
- (id)dimmingView;
- (void)enableDictationButton:(bool)arg1;
- (id)initForTextPasswordType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardAttributes:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTitle:(id)arg1 PINEntryAttributes:(id)arg2;
- (id)initWithTitle:(id)arg1 keyboardAttributes:(id)arg2;
- (id)initWithTitle:(id)arg1 passcodeSize:(long long)arg2;
- (id)keyboardAttributes;
- (id)keyboardView;
- (void)keyboardView:(id)arg1 didUpdateText:(id)arg2;
- (void)keyboardView:(id)arg1 generatedTextInputPayload:(id)arg2;
- (void)keyboardViewDidCancel:(id)arg1;
- (void)keyboardViewDidHitReturnKey:(id)arg1;
- (void)keyboardViewPressedDictationButton:(id)arg1;
- (void)keyboardViewReleasedDictationButton:(id)arg1;
- (void)loadView;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousKeyboardFrame;
- (void)setAlertView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setKeyboardAttributes:(id)arg1;
- (void)setKeyboardView:(id)arg1;
- (void)setPreviousKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)text;
- (unsigned long long)type;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
