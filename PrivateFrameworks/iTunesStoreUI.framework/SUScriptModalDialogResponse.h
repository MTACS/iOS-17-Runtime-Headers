
@interface SUScriptModalDialogResponse : NSObject {
    long long  _buttonIndex;
    NSString * _textFieldValue;
}

@property (nonatomic) long long buttonIndex;
@property (nonatomic, retain) NSString *textFieldValue;

- (long long)buttonIndex;
- (void)dealloc;
- (void)setButtonIndex:(long long)arg1;
- (void)setTextFieldValue:(id)arg1;
- (id)textFieldValue;

@end
