
@protocol INVCVoiceShortcut <NSObject>

@required

- (NSString *)identifier;
- (NSString *)phrase;
- (INShortcut *)shortcut;

@end
