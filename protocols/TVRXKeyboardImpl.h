
@protocol TVRXKeyboardImpl <NSObject>

@required

- (TVRCKeyboardAttributes *)attributes;
- (bool)isEditing;
- (void)sendReturnKey;
- (void)setKeyboardController:(TVRXKeyboardController *)arg1;
- (void)setText:(NSString *)arg1;
- (NSString *)text;

@optional

- (void)setTextActionPayload:(RTIDataPayload *)arg1;

@end
