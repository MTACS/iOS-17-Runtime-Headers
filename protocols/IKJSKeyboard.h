
@protocol IKJSKeyboard <JSExport>

@required

- (void)setSuggestions:(JSValue *)arg1;
- (void)setText:(NSString *)arg1;
- (JSValue *)suggestions;
- (NSString *)text;

@end
