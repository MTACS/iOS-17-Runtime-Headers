
@protocol TIUserDictionaryEntry <NSObject>

@required

- (NSString *)phrase;
- (void)setPhrase:(NSString *)arg1;
- (void)setShortcut:(NSString *)arg1;
- (void)setTimestamp:(NSNumber *)arg1;
- (NSString *)shortcut;
- (NSNumber *)timestamp;

@end
