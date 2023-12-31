
@protocol SCROBrailleDisplayCommandDispatcherDelegate <NSObject>

@required

- (<SCROBrailleDisplayInputManagerProtocol> *)brailleInputManager;
- (void)handleCommandDeleteKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandEscapeKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandForwardDeleteKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandMoveLeftForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandMoveRightForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandPanLeftForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandPanRightForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandReturnBrailleEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandRouterKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandToggleContractedBrailleEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandToggleEightDotBrailleEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandTranslateForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandWordDescriptionEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleUnsupportedKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;

@end
