
@interface _UIKeyShortcutHUDDismissalResponse : NSObject <NSSecureCoding> {
    UIKeyCommand * _keyCommand;
    BKSHIDEventAuthenticationMessage * _pasteAuthenticationMessage;
}

@property (nonatomic, retain) UIKeyCommand *keyCommand;
@property (nonatomic, retain) BKSHIDEventAuthenticationMessage *pasteAuthenticationMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyCommand;
- (id)pasteAuthenticationMessage;
- (void)setKeyCommand:(id)arg1;
- (void)setPasteAuthenticationMessage:(id)arg1;

@end
