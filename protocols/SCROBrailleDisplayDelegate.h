
@protocol SCROBrailleDisplayDelegate <NSObject>

@required

- (void)brailleDidStartEditingWithDisplay:(SCROBrailleDisplay *)arg1;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 copyStringToClipboard:(NSString *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 deletedUntranslatedText:(NSString *)arg2 speakLiterally:(bool)arg3;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didDisplay:(NSAttributedString *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didMoveSelection:(unsigned long long)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didPanLeft:(NSNumber *)arg2 elementToken:(NSNumber *)arg3 appToken:(id)arg4 lineOffset:(NSNumber *)arg5;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didPanRight:(NSNumber *)arg2 elementToken:(NSNumber *)arg3 appToken:(id)arg4 lineOffset:(NSNumber *)arg5;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didReplaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withString:(NSString *)arg3 cursor:(unsigned long long)arg4;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 driverDidLoad:(bool)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 insertedUntranslatedText:(NSString *)arg2 speakLiterally:(bool)arg3;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 isSleeping:(bool)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 memorizedKey:(SCROBrailleKey *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 pressedKeys:(NSArray *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 willMemorizeKey:(SCROBrailleKey *)arg2;
- (void)brailleDisplayHadUserInteraction:(SCROBrailleDisplay *)arg1;
- (void)brailleDriverDisconnected:(SCROBrailleDisplay *)arg1;
- (<SCROBrailleDisplayInputManagerProtocol> *)brailleInputManager;
- (void)configurationChangedForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (<SCROBrailleDisplayCommandDispatcherProtocol> *)newBrailleDisplayCommandDispatcher;
- (void)playBorderHitSoundForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (void)requestSpeech:(NSString *)arg1 language:(NSString *)arg2;

@end
