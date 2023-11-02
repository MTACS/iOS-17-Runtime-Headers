
@interface _UIDatePickerNumericKeyboardViewController : UIViewController {
    UIKeyboard * _keyboard;
}

@property (nonatomic, readonly) UIKeyboard *keyboard;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_updateKeyboardRenderConfiguration;
- (id)init;
- (id)keyboard;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
