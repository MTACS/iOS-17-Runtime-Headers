
@protocol SCROBrailleDriverProtocol <NSObject>

@required

- (int)brailleInputMode;
- (NSArray *)getInputEvents;
- (unsigned long long)interfaceVersion;
- (bool)isDriverLoaded;
- (bool)isInputEnabled;
- (bool)isSleeping;
- (int)loadDriverWithIOElement:(id <SCROIOElementProtocol>)arg1;
- (long long)mainSize;
- (NSString *)modelIdentifier;
- (bool)postsKeyboardEvents;
- (bool)setMainCells:(const char *)arg1 length:(long long)arg2;
- (bool)setStatusCells:(const char *)arg1 length:(long long)arg2;
- (long long)statusSize;
- (bool)supportsBlinkingCursor;
- (bool)unloadDriver;

@optional

- (SCRO2DBrailleCanvas *)canvas;
- (void)displayCanvas;
- (void)setBrailleDriverDelegate:(id <SCROBrailleDriverDelegate>)arg1;

@end
