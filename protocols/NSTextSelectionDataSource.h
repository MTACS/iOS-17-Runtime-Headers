
@protocol NSTextSelectionDataSource <NSObject>

@required

- (long long)baseWritingDirectionAtLocation:(id <NSTextLocation>)arg1;
- (NSTextRange *)documentRange;
- (void)enumerateCaretOffsetsInLineFragmentAtLocation:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 10: <NSTextLocation> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, <NSTextLocation> *, bool, bool*, void*
- (void)enumerateSubstringsFromLocation:(void *)arg1 options:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 11: <NSTextLocation> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSTextRange *, NSTextRange *, bool*, void*
- (NSTextRange *)lineFragmentRangeForPoint:(struct CGPoint { double x1; double x2; })arg1 inContainerAtLocation:(id <NSTextLocation>)arg2;
- (<NSTextLocation> *)locationFromLocation:(id <NSTextLocation>)arg1 withOffset:(long long)arg2;
- (long long)offsetFromLocation:(id <NSTextLocation>)arg1 toLocation:(id <NSTextLocation>)arg2;
- (NSTextRange *)textRangeForSelectionGranularity:(long long)arg1 enclosingLocation:(id <NSTextLocation>)arg2;

@optional

- (void)enumerateContainerBoundariesFromLocation:(void *)arg1 reverse:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: <NSTextLocation> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSTextLocation> *, bool*, void*
- (long long)textLayoutOrientationAtLocation:(id <NSTextLocation>)arg1;

@end
