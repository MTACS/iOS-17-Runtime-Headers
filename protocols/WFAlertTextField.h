
@protocol WFAlertTextField <NSObject>

@required

+ (bool)usesSuggestions;

- (NSString *)alertAutocapitalizationType;
- (NSString *)alertClearButtonMode;
- (NSString *)alertReturnKeyType;
- (long long)alertTextInputMode;
- (NSString *)placeholder;
- (void)setAlertAutocapitalizationType:(NSString *)arg1;
- (void)setAlertClearButtonMode:(NSString *)arg1;
- (void)setAlertReturnKeyType:(NSString *)arg1;
- (void)setAlertTextInputMode:(long long)arg1;
- (void)setPlaceholder:(NSString *)arg1;
- (void)setSuggestions:(NSArray *)arg1;
- (void)setText:(NSString *)arg1;
- (NSArray *)suggestions;
- (NSString *)text;

@end
