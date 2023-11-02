
@interface RVSelection : NSObject

+ (unsigned long long)maxContextLength;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })revealRangeAtIndex:(unsigned long long)arg1 selectedRanges:(id)arg2 shouldUpdateSelection:(bool*)arg3;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })searchRangeForString:(id)arg1 aroundLocation:(unsigned long long)arg2;

@end
