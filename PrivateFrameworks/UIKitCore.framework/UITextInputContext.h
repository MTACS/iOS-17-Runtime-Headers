
@interface UITextInputContext : NSObject

@property (getter=isDictationInputExpected, nonatomic) bool dictationInputExpected;
@property (getter=isHardwareKeyboardInputExpected, nonatomic) bool hardwareKeyboardInputExpected;
@property (getter=isPencilInputExpected, nonatomic) bool pencilInputExpected;

+ (id)current;
+ (id)new;

- (bool)isDictationInputExpected;
- (bool)isHardwareKeyboardInputExpected;
- (bool)isPencilInputExpected;
- (void)setDictationInputExpected:(bool)arg1;
- (void)setHardwareKeyboardInputExpected:(bool)arg1;
- (void)setPencilInputExpected:(bool)arg1;
- (void)updateInputSource:(long long)arg1 toUpdate:(bool)arg2;

@end
