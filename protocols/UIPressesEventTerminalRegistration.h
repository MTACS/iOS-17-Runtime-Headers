
@protocol UIPressesEventTerminalRegistration <NSObject>

@required

- (NSArray *)allowedPressTypes;
- (void)pressesEventDidReceiveTerminal:(UIPressesEvent *)arg1;

@end
