
@interface TSWPDeletionRangeMap : NSObject {
    TSWPRangeArray * _removedRanges;
    unsigned long long  _subRangeStart;
}

- (void)adjustByDelta:(long long)arg1;
- (bool)containsCharIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 removeRanges:(id)arg2;
- (id)inverseRangesInStorageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mappedCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })unmappedCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
