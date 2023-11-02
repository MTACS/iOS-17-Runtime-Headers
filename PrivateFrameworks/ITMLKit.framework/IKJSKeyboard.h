
@interface IKJSKeyboard : IKJSObject <IKJSKeyboard, _IKJSKeyboard, _IKJSKeyboardProxy> {
    <IKAppKeyboardBridge> * _appBridge;
}

@property (nonatomic, retain) <IKAppKeyboardBridge> *appBridge;
@property (nonatomic, copy) JSValue *hints;
@property (nonatomic, copy) JSValue *suggestions;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)appBridge;
- (id)asPrivateIKJSKeyboard;
- (id)hints;
- (void)jsDidSelectHint:(id)arg1;
- (void)jsTextDidChange;
- (void)setAppBridge:(id)arg1;
- (void)setHints:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setText:(id)arg1;
- (id)suggestions;
- (id)text;

@end
