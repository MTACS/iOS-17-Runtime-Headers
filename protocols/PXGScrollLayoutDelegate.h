
@protocol PXGScrollLayoutDelegate <NSObject>

@optional

- (void)scrollLayoutDidEndScrolling:(PXGScrollLayout *)arg1;
- (void)scrollLayoutDidScroll:(PXGScrollLayout *)arg1;
- (void)scrollLayoutWillBeginScrolling:(PXGScrollLayout *)arg1;
- (void)scrollLayoutWillEndScrolling:(PXGScrollLayout *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3 currentContentOffset:(struct CGPoint { double x1; double x2; })arg4;

@end
