
@interface SCROBrailleDisplayCommandDispatcher : NSObject <SCROBrailleDisplayCommandDispatcherProtocol> {
    NSDictionary * _commandDictionary;
    <SCROBrailleDisplayCommandDispatcherDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCROBrailleDisplayCommandDispatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDeleteEvent:(id)arg1;
- (void)_handleEscapeEvent:(id)arg1;
- (void)_handleForwardDeleteEvent:(id)arg1;
- (void)_handleMoveLeftEvent:(id)arg1;
- (void)_handleMoveRightEvent:(id)arg1;
- (void)_handlePanLeftEvent:(id)arg1;
- (void)_handlePanRightEvent:(id)arg1;
- (void)_handleReturnEvent:(id)arg1;
- (void)_handleRouterEvent:(id)arg1;
- (void)_handleToggleContractedBrailleEvent:(id)arg1;
- (void)_handleToggleEightDotBrailleEvent:(id)arg1;
- (void)_handleTranslateEvent:(id)arg1;
- (void)_handleUnsupportedEvent:(id)arg1;
- (void)_handleWordDescriptionEvent:(id)arg1;
- (id)delegate;
- (bool)handleBrailleKeyEvent:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
