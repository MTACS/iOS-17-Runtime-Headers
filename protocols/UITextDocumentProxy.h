
@protocol UITextDocumentProxy <UIKeyInput>

@required

- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
- (NSString *)documentContextAfterInput;
- (NSString *)documentContextBeforeInput;
- (NSUUID *)documentIdentifier;
- (UITextInputMode *)documentInputMode;
- (NSString *)selectedText;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)unmarkText;

@end
