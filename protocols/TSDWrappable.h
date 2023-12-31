
@protocol TSDWrappable <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (bool)hasAlpha;
- (bool)isHTMLWrap;
- (TSDAbstractLayout *)parent;
- (int)wrapDirection;
- (int)wrapFitType;
- (TSDWrapPolygon *)wrapPolygon;
- (int)wrapType;

@end
