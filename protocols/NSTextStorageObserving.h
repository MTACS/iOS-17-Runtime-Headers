
@protocol NSTextStorageObserving <NSObject>

@required

- (void)performEditingTransactionForTextStorage:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 6: NSTextStorage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)processEditingForTextStorage:(NSTextStorage *)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)setTextStorage:(NSTextStorage *)arg1;
- (NSTextStorage *)textStorage;

@end
