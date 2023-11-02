
@protocol SCROSBrailleDisplayManagerDelegate <NSObject>

@required

- (void)configurationDidChange;
- (void)handleBrailleDeletedUntranslatedText:(NSString *)arg1 speakLiterally:(bool)arg2;
- (void)handleBrailleDidDisplay:(NSAttributedString *)arg1;
- (void)handleBrailleDidPanLeft:(NSNumber *)arg1 elementToken:(NSNumber *)arg2 appToken:(id)arg3 lineOffset:(NSNumber *)arg4;
- (void)handleBrailleDidPanRight:(NSNumber *)arg1 elementToken:(NSNumber *)arg2 appToken:(id)arg3 lineOffset:(NSNumber *)arg4;
- (void)handleBrailleDidShowNextAnnouncement:(NSNumber *)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(NSNumber *)arg1;
- (void)handleBrailleDriverDidLoad;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleInsertedUntranslatedText:(NSString *)arg1 speakLiterally:(bool)arg2;
- (void)handleBrailleKeyMemorize:(SCROBrailleKey *)arg1;
- (void)handleBrailleKeyWillMemorize:(SCROBrailleKey *)arg1;
- (void)handleBrailleKeypress:(NSArray *)arg1;
- (void)handleBrailleReplaceTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(NSString *)arg2 cursor:(unsigned long long)arg3;
- (void)handleBrailleSpeechRequest:(NSString *)arg1 language:(NSString *)arg2;
- (void)handleBrailleTableFailedToLoad:(NSString *)arg1;
- (void)handleCopyStringToClipboard:(NSString *)arg1;
- (void)handleDisplayModeChanged:(NSNumber *)arg1;
- (void)handleFailedToLoadBluetoothDevice:(NSString *)arg1;
- (void)handlePlayBorderHitSound;
- (void)handlePlayCommandNotSupportedSound;
- (void)handleStartEditing;
- (void)handleUserEventOccured;

@end
