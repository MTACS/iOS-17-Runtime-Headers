
@protocol NSTextElementProvider <NSObject>

@required

- (NSTextRange *)documentRange;
- (<NSTextLocation> *)enumerateTextElementsFromLocation:(void *)arg1 options:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 8: <NSTextLocation> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSTextElement *, void*
- (void)replaceContentsInRange:(NSTextRange *)arg1 withTextElements:(NSArray *)arg2;
- (void)synchronizeToBackingStore:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (NSTextRange *)adjustedRangeFromRange:(NSTextRange *)arg1 forEditingTextSelection:(bool)arg2;
- (<NSTextLocation> *)locationFromLocation:(id <NSTextLocation>)arg1 withOffset:(long long)arg2;
- (long long)offsetFromLocation:(id <NSTextLocation>)arg1 toLocation:(id <NSTextLocation>)arg2;

@end
