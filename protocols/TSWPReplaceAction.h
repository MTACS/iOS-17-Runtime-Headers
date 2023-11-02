
@protocol TSWPReplaceAction <NSObject>

@required

- (long long)delta;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertedRange;
- (void)performWithStorage:(void *)arg1 delta:(void *)arg2 undoTransaction:(void *)arg3 replaceBlock:(void *)arg4; // needs 4 arg types, found 10: TSWPStorage *, long long, void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TSWPSelection *, NSString *, void*
- (unsigned long long)targetCharIndex;

@end
