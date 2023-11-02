
@interface UIDictationInputMode : UISpecializedInputMode {
    NSMutableDictionary * _cachedIcons;
    UIKeyboardInputMode * _currentInputModeForDictation;
    bool  _isCurrentDictationLanguageOnDevice;
    UITouch * _triggeringTouch;
    bool  _usingTypeAndTalk;
}

@property (nonatomic, retain) UIKeyboardInputMode *currentInputModeForDictation;
@property (nonatomic) bool isCurrentDictationLanguageOnDevice;
@property (nonatomic, retain) UITouch *triggeringTouch;
@property (nonatomic) bool usingTypeAndTalk;

+ (bool)currentInputModeSupportsDictation;

- (void).cxx_destruct;
- (id)currentInputModeForDictation;
- (bool)includeBarHeight;
- (id)indicatorIconForDictationLanguage:(id)arg1 scaleFactor:(double)arg2;
- (bool)isCurrentDictationLanguageOnDevice;
- (void)setCurrentInputModeForDictation:(id)arg1;
- (void)setIsCurrentDictationLanguageOnDevice:(bool)arg1;
- (void)setTriggeringTouch:(id)arg1;
- (void)setUsingTypeAndTalk:(bool)arg1;
- (bool)showSWLayoutWithHWKeyboard;
- (id)triggeringTouch;
- (bool)usingTypeAndTalk;
- (Class)viewControllerClass;

@end
