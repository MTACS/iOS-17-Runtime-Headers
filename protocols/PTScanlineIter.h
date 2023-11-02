
@protocol PTScanlineIter <NSObject>

@required

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextRangeX;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nextRangeY;
- (void)resetX;

@end
