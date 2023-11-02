
@protocol BRLTBrailleStateManagerDelegate <NSObject>

@required

- (void)brailleDisplayDeletedCharacter:(BRLTBrailleChar *)arg1;
- (void)brailleDisplayInsertedCharacter:(BRLTBrailleChar *)arg1 modifiers:(NSArray *)arg2;
- (void)brailleDisplayStringDidChange:(BRLTBrailleString *)arg1 brailleSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 modifiers:(NSArray *)arg3;
- (void)didInsertScriptString:(NSString *)arg1;
- (void)replaceScriptStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withScriptString:(BRLTScriptString *)arg2 cursorLocation:(unsigned long long)arg3;
- (void)requestSpeech:(NSString *)arg1 language:(NSString *)arg2;
- (void)scriptSelectionDidChange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
