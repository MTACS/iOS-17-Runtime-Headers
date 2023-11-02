
@protocol BRLTBrailleTranslationDelegateProtocol <NSObject>

@required

- (NSString *)printBrailleForText:(NSString *)arg1 language:(NSString *)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 locations:(id*)arg5 textFormattingRanges:(BRLTTextFormattingRanges *)arg6;
- (NSString *)textForPrintBraille:(NSString *)arg1 language:(NSString *)arg2 mode:(unsigned long long)arg3 locations:(id*)arg4;

@end
