
@protocol BRLTJaBrailleStateManagerDelegate

@required

- (void)brailleDisplayStringDidChange:(BRLTBrailleString *)arg1 brailleSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 modifiers:(NSArray *)arg3;
- (void)replaceScriptStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withScriptString:(BRLTScriptString *)arg2 cursorLocation:(long long)arg3;
- (void)requestSpeech:(NSString *)arg1 language:(NSString *)arg2;

@end
