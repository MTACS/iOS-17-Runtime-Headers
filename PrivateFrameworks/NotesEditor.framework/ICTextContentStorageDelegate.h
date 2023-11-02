
@interface ICTextContentStorageDelegate : NSObject <NSTextContentStorageDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)textContentManager:(id)arg1 shouldEnumerateTextElement:(id)arg2 options:(unsigned long long)arg3;
- (id)textContentStorage:(id)arg1 textParagraphWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
