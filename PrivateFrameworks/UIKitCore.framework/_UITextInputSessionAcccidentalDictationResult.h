
@interface _UITextInputSessionAcccidentalDictationResult : NSObject {
    unsigned long long  _result;
    _UITextInputSessionKeyboardDockItemButtonPressAction * _triggerAction;
}

@property (nonatomic) unsigned long long result;
@property (nonatomic, retain) _UITextInputSessionKeyboardDockItemButtonPressAction *triggerAction;

- (void).cxx_destruct;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;
- (void)setTriggerAction:(id)arg1;
- (id)triggerAction;

@end
