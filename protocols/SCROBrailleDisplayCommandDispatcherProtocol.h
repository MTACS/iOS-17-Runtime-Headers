
@protocol SCROBrailleDisplayCommandDispatcherProtocol <NSObject>

@required

- (<SCROBrailleDisplayCommandDispatcherDelegate> *)delegate;
- (bool)handleBrailleKeyEvent:(SCROBrailleKey *)arg1;
- (void)setDelegate:(id <SCROBrailleDisplayCommandDispatcherDelegate>)arg1;

@end
