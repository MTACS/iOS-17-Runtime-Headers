
@interface SBUIExternalPreferences : NSObject {
    bool  _keyboardPlaysSounds;
    NSUserDefaults * _soundDefaults;
}

@property (nonatomic) bool keyboardPlaysSounds;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)keyboardPlaysSounds;
- (void)setKeyboardPlaysSounds:(bool)arg1;

@end
