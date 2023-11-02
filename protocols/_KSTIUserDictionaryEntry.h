
@protocol _KSTIUserDictionaryEntry <NSObject>

@required

- (NSString *)phrase;
- (void)setPhrase:(NSString *)arg1;
- (void)setShortcut:(NSString *)arg1;
- (void)setTimestamp:(NSDate *)arg1;
- (NSString *)shortcut;
- (NSDate *)timestamp;

@end
