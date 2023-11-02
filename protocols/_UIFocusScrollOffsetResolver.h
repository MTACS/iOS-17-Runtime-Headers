
@protocol _UIFocusScrollOffsetResolver <NSObject>

@required

- (struct CGPoint { double x1; double x2; })contentOffsetForScrollRequest:(_UIFocusScrollRequest *)arg1;
- (unsigned long long)scrollOffsetResolverType;

@end
