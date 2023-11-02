
@protocol UIKeyboardUIServiceProtocol

@required

- (void)setKeyboardAlpha:(NSNumber *)arg1 force:(NSNumber *)arg2 processId:(NSNumber *)arg3;
- (UIKeyboardUISnapshot *)snapshotForOptions:(NSNumber *)arg1;

@end
