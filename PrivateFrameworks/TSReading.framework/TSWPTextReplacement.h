
@interface TSWPTextReplacement : NSObject <TSWPReplaceAction> {
    TSWPSelection * _selection;
    NSString * _string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (long long)delta;
- (id)initWithSelection:(id)arg1 string:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertedRange;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3 replaceBlock:(id /* block */)arg4;
- (unsigned long long)targetCharIndex;

@end
