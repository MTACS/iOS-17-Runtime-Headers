
@interface ASVHitTestStrategy : ASVHitTestHistory

- (id)decisionForHitTestOfType:(void *)arg1 atScreenPoint:(void *)arg2 inFrame:(void *)arg3 withViewportSize:(void *)arg4 assetPosition:(void *)arg5 maxDistance:(void *)arg6; // needs 6 arg types, found 4: long long, id, struct CGSize { double x1; double x2; }, float
- (id)decisionForHitTestOfType:(void *)arg1 atScreenPoint:(void *)arg2 inSession:(void *)arg3 withViewportSize:(void *)arg4 assetPosition:(void *)arg5 maxDistance:(void *)arg6; // needs 6 arg types, found 4: long long, id, struct CGSize { double x1; double x2; }, float

@end
