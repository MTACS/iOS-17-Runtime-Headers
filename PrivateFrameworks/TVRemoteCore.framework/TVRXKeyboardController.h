
@interface TVRXKeyboardController : NSObject {
    <TVRXKeyboardControllerDelegate> * _delegate;
    <TVRXKeyboardImpl> * _keyboardImpl;
}

@property (nonatomic, readonly) TVRCKeyboardAttributes *attributes;
@property (nonatomic) <TVRXKeyboardControllerDelegate> *delegate;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (getter=_keyboardImpl, setter=_setKeyboardImpl:, nonatomic, retain) <TVRXKeyboardImpl> *keyboardImpl;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_beginSessionWithAttributes:(id)arg1;
- (void)_editingSessionBeganWithAttributes:(id)arg1;
- (void)_editingSessionEnded;
- (void)_editingSessionUpdatedAttributes:(id)arg1;
- (void)_editingSessionUpdatedText:(id)arg1;
- (void)_endSession;
- (id)_init;
- (id)_keyboardImpl;
- (void)_setKeyboardImpl:(id)arg1;
- (void)_textActionPayloadGenerated:(id)arg1;
- (id)attributes;
- (id)delegate;
- (bool)isEditing;
- (void)sendReturnKey;
- (void)sendTextActionPayload:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
