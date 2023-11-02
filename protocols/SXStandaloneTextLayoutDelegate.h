
@protocol SXStandaloneTextLayoutDelegate

@required

- (double)marginForTextLayout:(SXStandaloneTextLayout *)arg1;
- (struct CGPoint { double x1; double x2; })positionForTextLayout:(SXStandaloneTextLayout *)arg1;
- (double)widthForTextLayout:(SXStandaloneTextLayout *)arg1;

@end
