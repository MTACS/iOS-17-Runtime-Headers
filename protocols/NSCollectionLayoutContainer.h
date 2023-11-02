
@protocol NSCollectionLayoutContainer <NSObject>

@required

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGSize { double x1; double x2; })contentSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })effectiveContentInsets;
- (struct CGSize { double x1; double x2; })effectiveContentSize;

@end
