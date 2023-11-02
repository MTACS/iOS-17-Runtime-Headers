
@interface ICBluetoothKeyboardHintViewController : ICHintViewController {
    bool  _hasAttachedHardwareKeyboard;
    bool  _isInHardwareKeyboardMode;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) bool forceShow;
@property (nonatomic, readonly) bool hasAttachedHardwareKeyboard;
@property (nonatomic, readonly) bool hasEditedNote;
@property (nonatomic, readonly) bool hasShownHint;
@property (nonatomic) bool isInHardwareKeyboardMode;
@property (nonatomic, readonly) bool shouldShow;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (void)didEditNote;
- (bool)forceShow;
- (bool)hasAttachedBluetoothKeyboard;
- (bool)hasAttachedHardwareKeyboard;
- (bool)hasEditedNote;
- (bool)hasShownHint;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 userDefaults:(id)arg2 buttonAction:(id /* block */)arg3;
- (bool)isInHardwareKeyboardMode;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)setIsInHardwareKeyboardMode:(bool)arg1;
- (void)setUserDefaults:(id)arg1;
- (bool)shouldShow;
- (void)show;
- (void)showIfNeeded;
- (void)updateHardwareKeyboardMode;
- (id)userDefaults;
- (void)viewDidLoad;

@end
