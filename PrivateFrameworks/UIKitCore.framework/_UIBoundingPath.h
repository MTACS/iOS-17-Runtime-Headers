
@interface _UIBoundingPath : NSObject <NSSecureCoding> {
    <UICoordinateSpace> * _coordinateSpace;
}

@property (nonatomic) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, readonly) bool isNonRectangular;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_centerEdgeInsetsOfBoundingPathAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_imageRepresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byInsettingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inscribedRectInBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byInsettingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 onEdges:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2 aspectRatio:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectInBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2 aspectRatio:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg4 minimumPadding:(double)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withSize:(double)arg3 minimumPadding:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withSize:(struct CGSize { double x1; double x2; })arg3 cornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg4 minimumPadding:(double)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withSize:(struct CGSize { double x1; double x2; })arg3 minimumPadding:(double)arg4;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg2 orientation:(long long)arg3 scale:(double)arg4;
- (id)coordinateSpace;
- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinateSpace:(id)arg1;
- (bool)isNonRectangular;
- (void)setCoordinateSpace:(id)arg1;
- (bool)validateForCoordinateSpace;

@end
