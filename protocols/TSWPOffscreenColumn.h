
@protocol TSWPOffscreenColumn <NSObject>

@required

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRange;
- (unsigned long long)nextWidowPullsDownFromCharIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)startAnchoredCharIndex;
- (unsigned long long)startCharIndex;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id <TSWPLayoutTarget>)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3;

@end
